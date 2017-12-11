/*
 * Twiddle.h
 *
 *  Created on: Dec 9, 2017
 *      Author: mo
 */

#ifndef TWIDDLE_H_
#define TWIDDLE_H_



class Twiddle {
public:


	Twiddle();
	virtual ~Twiddle();

	void twiddleParam(double error,double *p[3], double *dp[3]);
};

#endif /* TWIDDLE_H_ */
