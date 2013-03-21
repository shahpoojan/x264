/*
 * slicetype_decision.h
 *
 *  Created on: 17 mars 2013
 *      Author: Jacques
 */

#ifndef SLICETYPE_DECISION_H_
#define SLICETYPE_DECISION_H_


#include "common1.h"
#include "macroblock1.h"
#include "cpu1.h"
#include "macroblock.h"
#include "me.h"



#include "somedefs.h"





int x264_slicetype_mb_cost( x264_t *h, x264_mb_analysis_t *a,
                            x264_frame_t **frames, int p0, int p1, int b,
                            int dist_scale_factor );

int x264_slicetype_frame_cost( x264_t *h, x264_mb_analysis_t *a,
                               x264_frame_t **frames, int p0, int p1, int b );

void x264_slicetype_analyse( x264_t *h );

void x264_slicetype_decide( x264_t *h );

int x264_rc_analyse_slice( x264_t *h );




#endif /* SLICETYPE_DECISION_H_ */
