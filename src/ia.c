/*
** EPITECH PROJECT, 2020
** AIA_n4s_2019
** File description:
** ia
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "string.h"
#include "n4s.h"
#include "my.h"

void go(infos_t *info, int nb)
{
    double wheels_dir[6] = {0.33, 0.3, 0.22, 0.18, 0.03, 0.01};
    int range[5] = {400, 500, 700, 1020, 1350};
    int i = 0;

    while (i <= 4) {
        if (info->mid < range[i]) {
            nb == 1 ?
            set_direction(wheels_dir[i], 1) : set_direction(wheels_dir[i], 0);
            i = 10;
        } else
            i++;
    }
    if (i == 5)
        nb == 1 ?
        set_direction(wheels_dir[i], 1) : set_direction(wheels_dir[i], 0);
}

int launch_ia(infos_t *info, char **tab)
{
    info->left = atof(tab[3]);
    info->mid = atof(tab[19]);
    info->right = atof(tab[34]);
    (info->left > info->right) ?
        go(info, 0) : go(info, 1);
    if (detect_end(tab[35]) == 1)
        exit(0);
    return (0);
}

void control_speed(infos_t *info)
{
    double speed[8] = {1.0, 0.8, 0.62, 0.5, 0.4, 0.3, 0.2, 0.1};
    int indicator_mid[7] = {2500, 2000, 1500, 1000, 500, 400, 300};
    int i = 0;

    while (i <= 6) {
        if (info->mid > indicator_mid[i]) {
            set_speed(speed[i]);
            i = 10;
        } else
            i++;
    }
    if (i == 7)
        set_speed(speed[i]);
}
