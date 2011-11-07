/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "PlayerInfoData.h"

static int
memb_playerName_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                             asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;

	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: value not given (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: UTF-8: broken encoding (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	if((size >= 1 && size <= 32)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: constraint failed (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_countryCode_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
                              asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;

	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: value not given (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: UTF-8: broken encoding (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}

	if((size == 2)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
		            "%s: constraint failed (%s:%d)",
		            td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_avatarData_6[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct avatarData, avatarType),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_NetAvatarType,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"avatarType"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct avatarData, avatar),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_AvatarHash,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"avatar"
	},
};
static ber_tlv_tag_t asn_DEF_avatarData_tags_6[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_avatarData_tag2el_6[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 1, 0, 0 }, /* avatar at 266 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 0, 0, 0 } /* avatarType at 264 */
};
static asn_SEQUENCE_specifics_t asn_SPC_avatarData_specs_6 = {
	sizeof(struct avatarData),
	offsetof(struct avatarData, _asn_ctx),
	asn_MAP_avatarData_tag2el_6,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_avatarData_6 = {
	"avatarData",
	"avatarData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_avatarData_tags_6,
	sizeof(asn_DEF_avatarData_tags_6)
	/sizeof(asn_DEF_avatarData_tags_6[0]), /* 1 */
	asn_DEF_avatarData_tags_6,	/* Same as above */
	sizeof(asn_DEF_avatarData_tags_6)
	/sizeof(asn_DEF_avatarData_tags_6[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_avatarData_6,
	2,	/* Elements count */
	&asn_SPC_avatarData_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PlayerInfoData_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct PlayerInfoData, playerName),
		(ASN_TAG_CLASS_UNIVERSAL | (12 << 2)),
		0,
		&asn_DEF_UTF8String,
		memb_playerName_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerName"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PlayerInfoData, isHuman),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"isHuman"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct PlayerInfoData, playerRights),
		(ASN_TAG_CLASS_UNIVERSAL | (10 << 2)),
		0,
		&asn_DEF_PlayerInfoRights,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"playerRights"
	},
	{	ATF_POINTER, 2, offsetof(struct PlayerInfoData, countryCode),
		(ASN_TAG_CLASS_UNIVERSAL | (12 << 2)),
		0,
		&asn_DEF_UTF8String,
		memb_countryCode_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"countryCode"
	},
	{	ATF_POINTER, 1, offsetof(struct PlayerInfoData, avatarData),
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_avatarData_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"avatarData"
	},
};
static ber_tlv_tag_t asn_DEF_PlayerInfoData_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_PlayerInfoData_tag2el_1[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 1, 0, 0 }, /* isHuman at 260 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (10 << 2)), 2, 0, 0 }, /* playerRights at 261 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (12 << 2)), 0, 0, 1 }, /* playerName at 259 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (12 << 2)), 3, -1, 0 }, /* countryCode at 262 */
	{ (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 4, 0, 0 } /* avatarData at 264 */
};
static asn_SEQUENCE_specifics_t asn_SPC_PlayerInfoData_specs_1 = {
	sizeof(struct PlayerInfoData),
	offsetof(struct PlayerInfoData, _asn_ctx),
	asn_MAP_PlayerInfoData_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_PlayerInfoData = {
	"PlayerInfoData",
	"PlayerInfoData",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PlayerInfoData_tags_1,
	sizeof(asn_DEF_PlayerInfoData_tags_1)
	/sizeof(asn_DEF_PlayerInfoData_tags_1[0]), /* 1 */
	asn_DEF_PlayerInfoData_tags_1,	/* Same as above */
	sizeof(asn_DEF_PlayerInfoData_tags_1)
	/sizeof(asn_DEF_PlayerInfoData_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_PlayerInfoData_1,
	5,	/* Elements count */
	&asn_SPC_PlayerInfoData_specs_1	/* Additional specs */
};

