/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 * 	`asn1c -fskeletons-copy`
 */

#include "JoinGameRequestMessage.h"

static asn_TYPE_member_t asn_MBR_joinGameAction_2[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct joinGameAction, choice.joinExistingGame),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_JoinExistingGame,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"joinExistingGame"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct joinGameAction, choice.joinNewGame),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_JoinNewGame,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"joinNewGame"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct joinGameAction, choice.rejoinExistingGame),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RejoinExistingGame,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"rejoinExistingGame"
	},
};
static asn_TYPE_tag2member_t asn_MAP_joinGameAction_tag2el_2[] = {
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* joinExistingGame at 283 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* joinNewGame at 284 */
	{ (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* rejoinExistingGame at 286 */
};
static asn_CHOICE_specifics_t asn_SPC_joinGameAction_specs_2 = {
	sizeof(struct joinGameAction),
	offsetof(struct joinGameAction, _asn_ctx),
	offsetof(struct joinGameAction, present),
	sizeof(((struct joinGameAction *)0)->present),
	asn_MAP_joinGameAction_tag2el_2,
	3,	/* Count of tags in the map */
	0,
	3	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_joinGameAction_2 = {
	"joinGameAction",
	"joinGameAction",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	0,	/* No PER visible constraints */
	asn_MBR_joinGameAction_2,
	3,	/* Elements count */
	&asn_SPC_joinGameAction_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_JoinGameRequestMessage_1[] = {
	{	ATF_NOFLAGS, 0, offsetof(struct JoinGameRequestMessage, joinGameAction),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_joinGameAction_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"joinGameAction"
	},
	{	ATF_NOFLAGS, 0, offsetof(struct JoinGameRequestMessage, autoLeave),
		(ASN_TAG_CLASS_UNIVERSAL | (1 << 2)),
		0,
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"autoLeave"
	},
};
static ber_tlv_tag_t asn_DEF_JoinGameRequestMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (11 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_JoinGameRequestMessage_tag2el_1[] = {
	{ (ASN_TAG_CLASS_UNIVERSAL | (1 << 2)), 1, 0, 0 }, /* autoLeave at 287 */
	{ (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* joinExistingGame at 283 */
	{ (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 0, 0, 0 }, /* joinNewGame at 284 */
	{ (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 0, 0, 0 } /* rejoinExistingGame at 286 */
};
static asn_SEQUENCE_specifics_t asn_SPC_JoinGameRequestMessage_specs_1 = {
	sizeof(struct JoinGameRequestMessage),
	offsetof(struct JoinGameRequestMessage, _asn_ctx),
	asn_MAP_JoinGameRequestMessage_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_JoinGameRequestMessage = {
	"JoinGameRequestMessage",
	"JoinGameRequestMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_JoinGameRequestMessage_tags_1,
	sizeof(asn_DEF_JoinGameRequestMessage_tags_1)
	/sizeof(asn_DEF_JoinGameRequestMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_JoinGameRequestMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_JoinGameRequestMessage_tags_1)
	/sizeof(asn_DEF_JoinGameRequestMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_JoinGameRequestMessage_1,
	2,	/* Elements count */
	&asn_SPC_JoinGameRequestMessage_specs_1	/* Additional specs */
};

