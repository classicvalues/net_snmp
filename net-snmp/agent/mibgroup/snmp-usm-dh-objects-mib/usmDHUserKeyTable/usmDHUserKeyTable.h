/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32 $ of : mfd-top.m2c,v $
 *
 * $Id: usmDHUserKeyTable.h,v 1.6 2004/10/16 00:35:35 rstory Exp $
 */
#ifndef USMDHUSERKEYTABLE_H
#define USMDHUSERKEYTABLE_H

#ifdef __cplusplus
extern          "C" {
#endif


/** @defgroup misc misc: Miscelaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

    /*
     * other required module components 
     */
    /* *INDENT-OFF*  */
config_require(snmp-usm-dh-objects-mib/usmDHUserKeyTable/usmDHUserKeyTable_interface);
config_require(snmp-usm-dh-objects-mib/usmDHUserKeyTable/usmDHUserKeyTable_data_access);
config_require(snmp-usm-dh-objects-mib/usmDHUserKeyTable/usmDHUserKeyTable_data_get);
config_require(snmp-usm-dh-objects-mib/usmDHUserKeyTable/usmDHUserKeyTable_data_set);
    /* *INDENT-ON*  */

    /*
     * OID and column number definitions for  
     */
#include "usmDHUserKeyTable_oids.h"

    /*
     * enum definions 
     */
#include "usmDHUserKeyTable_enums.h"

    /*
     *********************************************************************
     * function declarations
     */
    void            init_usmDHUserKeyTable(void);

    /*
     *********************************************************************
     * Table declarations
     */
/**********************************************************************
 **********************************************************************
 ***
 *** Table usmDHUserKeyTable
 ***
 **********************************************************************
 **********************************************************************/
    /*
     * usmDHUserKeyTable is subid 2 of usmDHPublicObjects.
     * Its status is Current.
     * OID: .1.3.6.1.3.101.1.1.2, length: 9
     */
    /*
     *********************************************************************
     * When you register your mib, you get to provide a generic
     * pointer that will be passed back to you for most of the
     * functions calls.
     *
     * TODO:100:r: Review all context structures
     */
    /*
     * TODO:101:o: |-> Review usmDHUserKeyTable registration context.
     */
    typedef struct usmUser *usmDHUserKeyTable_registration_ptr;

/**********************************************************************/
    /*
     * TODO:110:r: |-> Review usmDHUserKeyTable data context structure.
     * This structure is used to represent the data for usmDHUserKeyTable.
     */
    typedef struct usmUser usmDHUserKeyTable_data;


    /*
     *********************************************************************
     * TODO:115:o: |-> Review usmDHUserKeyTable undo context.
     * We're just going to use the same data structure for our
     * undo_context. If you want to do something more efficent,
     * define your typedef here.
     */
    typedef usmDHUserKeyTable_data usmDHUserKeyTable_undo_data;

    /*
     * TODO:120:r: |-> Review usmDHUserKeyTable mib index.
     * This structure is used to represent the index for usmDHUserKeyTable.
     */
    typedef struct usmDHUserKeyTable_mib_index_s {

        /*
         * usmUserEngineID(1)/SnmpEngineID/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/h
         */
        char            usmUserEngineID[32];
        size_t          usmUserEngineID_len;

        /*
         * usmUserName(2)/SnmpAdminString/ASN_OCTET_STR/char(char)//L/a/w/e/R/d/H
         */
        char            usmUserName[32];
        size_t          usmUserName_len;


    } usmDHUserKeyTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review usmDHUserKeyTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(9)
     */
#define MAX_usmDHUserKeyTable_IDX_LEN     66


    /*
     *********************************************************************
     * TODO:130:o: |-> Review usmDHUserKeyTable Row request (rowreq) context.
     * When your functions are called, you will be passed a
     * usmDHUserKeyTable_rowreq_ctx pointer.
     */
    typedef struct usmDHUserKeyTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
        netsnmp_index   oid_idx;
        oid             oid_tmp[MAX_usmDHUserKeyTable_IDX_LEN];

        usmDHUserKeyTable_mib_index tbl_idx;

        usmDHUserKeyTable_data *data;
        usmDHUserKeyTable_undo_data *undo;
        unsigned int    column_set_flags;       /* flags for set columns */


        /*
         * flags per row. Currently, the first 8 bits are reserverd
         * for the user. See mfd.h for other flags.
         */
        u_int           rowreq_flags;

        /*
         * implementor's context pointer (provided during registration)
         */
        usmDHUserKeyTable_registration_ptr usmDHUserKeyTable_reg;

        /*
         * TODO:131:o: |   |-> Add useful data to usmDHUserKeyTable rowreq context.
         */

        /*
         * storage for future expansion
         */
        netsnmp_data_list *usmDHUserKeyTable_data_list;

    } usmDHUserKeyTable_rowreq_ctx;

    typedef struct usmDHUserKeyTable_ref_rowreq_ctx_s {
        usmDHUserKeyTable_rowreq_ctx *rowreq_ctx;
    } usmDHUserKeyTable_ref_rowreq_ctx;

    /*
     *********************************************************************
     * function prototypes
     */
    int
        usmDHUserKeyTable_pre_request(usmDHUserKeyTable_registration_ptr
                                      user_context);
    int
        usmDHUserKeyTable_post_request(usmDHUserKeyTable_registration_ptr
                                       user_context);

    usmDHUserKeyTable_data *usmDHUserKeyTable_allocate_data(void);
    void            usmDHUserKeyTable_release_data(usmDHUserKeyTable_data *
                                                   data);

    int
        usmDHUserKeyTable_check_dependencies(usmDHUserKeyTable_rowreq_ctx *
                                             rowreq_ctx);
    int             usmDHUserKeyTable_commit(usmDHUserKeyTable_rowreq_ctx *
                                             rowreq_ctx);
    int
        usmDHUserKeyTable_irreversible_commit(usmDHUserKeyTable_rowreq_ctx
                                              * rowreq_ctx);

    extern oid      usmDHUserKeyTable_oid[];
    extern int      usmDHUserKeyTable_oid_size;


#include "usmDHUserKeyTable_interface.h"
#include "usmDHUserKeyTable_data_access.h"
#include "usmDHUserKeyTable_data_get.h"
#include "usmDHUserKeyTable_data_set.h"

    /*
     * DUMMY markers, ignore
     *
     * TODO:099:x: *************************************************************
     * TODO:199:x: *************************************************************
     * TODO:299:x: *************************************************************
     * TODO:399:x: *************************************************************
     * TODO:499:x: *************************************************************
     */

#ifdef __cplusplus
}
#endif
#endif                          /* USMDHUSERKEYTABLE_H */
