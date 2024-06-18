#ifndef ABS_H
#define ABS_H

/**
 * if x is less than 0; multiply by -1 to become positive
 * else return number as is already positive
 */
#define ABS(x) (((x) < 0)? ((x) * -1) : (x))

#endif