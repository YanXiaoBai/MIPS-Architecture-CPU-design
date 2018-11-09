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
    work_m_00000000002919258546_1733832700_init();
    work_m_00000000002769232533_0467708899_init();
    work_m_00000000000429120703_1158921438_init();
    work_m_00000000003517688272_1478518036_init();
    work_m_00000000000382488716_0621066737_init();
    work_m_00000000003104716607_0757879789_init();
    work_m_00000000003953661094_1579609468_init();
    work_m_00000000000002050992_1785967555_init();
    work_m_00000000001557394812_1746258098_init();
    work_m_00000000001319220772_0791106946_init();
    work_m_00000000003169047147_0886308060_init();
    work_m_00000000002996402800_1975093957_init();
    work_m_00000000001206490001_2321183677_init();
    work_m_00000000003071449683_0570219952_init();
    work_m_00000000002289611686_2924402094_init();
    work_m_00000000001643501121_1729233856_init();
    work_m_00000000000731363167_3701351626_init();
    work_m_00000000003925585319_2627615439_init();
    work_m_00000000000844121184_0530857640_init();
    work_m_00000000001568229103_2732508831_init();
    work_m_00000000003586171569_2886028973_init();
    work_m_00000000003863169615_1365751767_init();
    work_m_00000000001917145664_3063122245_init();
    work_m_00000000003125728786_3877310806_init();
    work_m_00000000002047498008_3671711236_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002047498008_3671711236");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
