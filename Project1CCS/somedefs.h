/*
 * somedefs.h
 *
 *  Created on: 17 mars 2013
 *      Author: Jacques
 */

#ifndef SOMEDEFS_H_
#define SOMEDEFS_H_


typedef struct
{
    /* 16x16 */
    int i_ref;
    x264_me_t me16x16;

    /* 8x8 */
    int       i_cost8x8;
    x264_me_t me8x8[4];

    /* Sub 4x4 */
    int       i_cost4x4[4]; /* cost per 8x8 partition */
    x264_me_t me4x4[4][4];

    /* Sub 8x4 */
    int       i_cost8x4[4]; /* cost per 8x8 partition */
    x264_me_t me8x4[4][2];

    /* Sub 4x8 */
    int       i_cost4x8[4]; /* cost per 8x8 partition */
    x264_me_t me4x8[4][4];

    /* 16x8 */
    int       i_cost16x8;
    x264_me_t me16x8[2];

    /* 8x16 */
    int       i_cost8x16;
    x264_me_t me8x16[2];

} x264_mb_analysis_list_t;

typedef struct
{
    /* conduct the analysis using this lamda and QP */
    int i_lambda;
    int i_lambda2;
    int i_qp;
    int16_t *p_cost_mv;
    int b_mbrd;


    /* I: Intra part */
    /* Take some shortcuts in intra search if intra is deemed unlikely */
    int b_fast_intra;
    int i_best_satd;

    /* Luma part */
    int i_sad_i16x16;
    int i_predict16x16;

    int i_sad_i8x8;
    int i_predict8x8[2][2];

    int i_sad_i4x4;
    int i_predict4x4[4][4];

    /* Chroma part */
    int i_sad_i8x8chroma;
    int i_predict8x8chroma;

    /* II: Inter part P/B frame */
    x264_mb_analysis_list_t l0;
    x264_mb_analysis_list_t l1;

    int i_cost16x16bi; /* used the same ref and mv as l0 and l1 (at least for now) */
    int i_cost16x16direct;
    int i_cost8x8bi;
    int i_cost8x8direct[4];
    int i_cost16x8bi;
    int i_cost8x16bi;

    int i_mb_partition16x8[2]; /* mb_partition_e */
    int i_mb_partition8x16[2];
    int i_mb_type16x8; /* mb_class_e */
    int i_mb_type8x16;

    int b_direct_available;

} x264_mb_analysis_t;



#endif /* SOMEDEFS_H_ */
