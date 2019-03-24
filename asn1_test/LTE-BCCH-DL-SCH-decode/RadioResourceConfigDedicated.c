/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "36331-c10.asn"
 * 	`asn1c -S /usr/local/share/asn1c -fcompound-names -fskeletons-copy -gen-PER`
 */

#include "RadioResourceConfigDedicated.h"

static asn_per_constraints_t asn_PER_type_mac_MainConfig_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_mac_MainConfig_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigDedicated__mac_MainConfig, choice.explicitValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_MainConfig,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"explicitValue"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RadioResourceConfigDedicated__mac_MainConfig, choice.defaultValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultValue"
		},
};
static asn_TYPE_tag2member_t asn_MAP_mac_MainConfig_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* explicitValue */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* defaultValue */
};
static asn_CHOICE_specifics_t asn_SPC_mac_MainConfig_specs_5 = {
	sizeof(struct RadioResourceConfigDedicated__mac_MainConfig),
	offsetof(struct RadioResourceConfigDedicated__mac_MainConfig, _asn_ctx),
	offsetof(struct RadioResourceConfigDedicated__mac_MainConfig, present),
	sizeof(((struct RadioResourceConfigDedicated__mac_MainConfig *)0)->present),
	asn_MAP_mac_MainConfig_tag2el_5,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_mac_MainConfig_5 = {
	"mac-MainConfig",
	"mac-MainConfig",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_mac_MainConfig_constr_5,
	asn_MBR_mac_MainConfig_5,
	2,	/* Elements count */
	&asn_SPC_mac_MainConfig_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RadioResourceConfigDedicated_1[] = {
	{ ATF_POINTER, 9, offsetof(struct RadioResourceConfigDedicated, srb_ToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_ToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srb-ToAddModList"
		},
	{ ATF_POINTER, 8, offsetof(struct RadioResourceConfigDedicated, drb_ToAddModList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ToAddModList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drb-ToAddModList"
		},
	{ ATF_POINTER, 7, offsetof(struct RadioResourceConfigDedicated, drb_ToReleaseList),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRB_ToReleaseList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drb-ToReleaseList"
		},
	{ ATF_POINTER, 6, offsetof(struct RadioResourceConfigDedicated, mac_MainConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_mac_MainConfig_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-MainConfig"
		},
	{ ATF_POINTER, 5, offsetof(struct RadioResourceConfigDedicated, sps_Config),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SPS_Config,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sps-Config"
		},
	{ ATF_POINTER, 4, offsetof(struct RadioResourceConfigDedicated, physicalConfigDedicated),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PhysicalConfigDedicated,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"physicalConfigDedicated"
		},
	{ ATF_POINTER, 3, offsetof(struct RadioResourceConfigDedicated, rlf_TimersAndConstants_r9),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_RLF_TimersAndConstants_r9,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rlf-TimersAndConstants-r9"
		},
	{ ATF_POINTER, 2, offsetof(struct RadioResourceConfigDedicated, measSubframePatternPCell_r10),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_MeasSubframePatternPCell_r10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measSubframePatternPCell-r10"
		},
	{ ATF_POINTER, 1, offsetof(struct RadioResourceConfigDedicated, neighCellsCRS_Info_r11),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NeighCellsCRS_Info_r11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"neighCellsCRS-Info-r11"
		},
};
static int asn_MAP_RadioResourceConfigDedicated_oms_1[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
static ber_tlv_tag_t asn_DEF_RadioResourceConfigDedicated_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RadioResourceConfigDedicated_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* srb-ToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* drb-ToAddModList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* drb-ToReleaseList */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mac-MainConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* sps-Config */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* physicalConfigDedicated */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* rlf-TimersAndConstants-r9 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* measSubframePatternPCell-r10 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* neighCellsCRS-Info-r11 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RadioResourceConfigDedicated_specs_1 = {
	sizeof(struct RadioResourceConfigDedicated),
	offsetof(struct RadioResourceConfigDedicated, _asn_ctx),
	asn_MAP_RadioResourceConfigDedicated_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_RadioResourceConfigDedicated_oms_1,	/* Optional members */
	6, 3,	/* Root/Additions */
	5,	/* Start extensions */
	10	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RadioResourceConfigDedicated = {
	"RadioResourceConfigDedicated",
	"RadioResourceConfigDedicated",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_RadioResourceConfigDedicated_tags_1,
	sizeof(asn_DEF_RadioResourceConfigDedicated_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicated_tags_1[0]), /* 1 */
	asn_DEF_RadioResourceConfigDedicated_tags_1,	/* Same as above */
	sizeof(asn_DEF_RadioResourceConfigDedicated_tags_1)
		/sizeof(asn_DEF_RadioResourceConfigDedicated_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RadioResourceConfigDedicated_1,
	9,	/* Elements count */
	&asn_SPC_RadioResourceConfigDedicated_specs_1	/* Additional specs */
};

