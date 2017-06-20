/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SecureMimeMessageV3dot1"
 * 	found in "pkix-smimecaps.asn1"
 * 	`asn1c -S asn1c/skeletons -pdu=all -pdu=Certificate -fwide-types`
 */

#ifndef	_SMIMECapabilities_H_
#define	_SMIMECapabilities_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SMIMECapability;

/* SMIMECapabilities */
typedef struct SMIMECapabilities {
	A_SEQUENCE_OF(struct SMIMECapability) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SMIMECapabilities_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SMIMECapabilities;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "SMIMECapability.h"

#endif	/* _SMIMECapabilities_H_ */
#include <asn_internal.h>