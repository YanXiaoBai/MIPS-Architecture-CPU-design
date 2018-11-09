/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002372444687_1733832700_init();
    work_m_00000000002769232533_0467708899_init();
    work_m_00000000003221307290_1158921438_init();
    work_m_00000000003517688272_1478518036_init();
    work_m_00000000002613744021_1196044910_init();
    work_m_00000000000382488716_0621066737_init();
    work_m_00000000003014707308_0757879789_init();
    work_m_00000000003953661094_1579609468_init();
    work_m_00000000000002050992_1785967555_init();
    work_m_00000000003277718389_1746258098_init();
    work_m_00000000001319220772_0791106946_init();
    work_m_00000000000937602577_0886308060_init();
    work_m_00000000000117928911_1975093957_init();
    work_m_00000000002185867725_2321183677_init();
    work_m_00000000000705421704_0570219952_init();
    work_m_00000000000423225249_2924402094_init();
    work_m_00000000001746966981_4257770650_init();
    work_m_00000000002009531346_1729233856_init();
    work_m_00000000004221952191_3701351626_init();
    work_m_00000000000237747703_2627615439_init();
    work_m_00000000003890009317_0530857640_init();
    work_m_00000000001568229103_2732508831_init();
    work_m_00000000003586171569_2886028973_init();
    work_m_00000000003863169615_1365751767_init();
    work_m_00000000001031312170_3063122245_init();
    work_m_00000000000290845383_0564064079_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000290845383_0564064079");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}