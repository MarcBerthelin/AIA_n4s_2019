/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** n4s
*/

#ifndef N4S_H_
#define N4S_H_

#include "my.h"

typedef struct infos {
    double left;
    double right;
    double mid;
    double speed;
} infos_t;

int detect_end(char *str);
void control_speed(infos_t *info);
int launch_ia(infos_t *info, char **tab);
void set_direction(double value, int neg);
void set_speed(double value);
char *my_gnl(void);

#endif /* !N4S_H_ */
