/* crypto/ocsp/ocsp_err.c */
/* ====================================================================
 * Copyright (c) 1999 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/ocsp.h>

/* BEGIN ERROR CODES */
#ifndef NO_ERR
static ERR_STRING_DATA OCSP_str_functs[]=
	{
{ERR_PACK(0,OCSP_F_ASN1_STRING_ENCODE,0),	"ASN1_STRING_encode"},
{ERR_PACK(0,OCSP_F_BASIC_RESPONSE_NEW,0),	"BASIC_RESPONSE_NEW"},
{ERR_PACK(0,OCSP_F_BASIC_RESPONSE_VERIFY,0),	"BASIC_RESPONSE_VERIFY"},
{ERR_PACK(0,OCSP_F_CERT_ID_NEW,0),	"CERT_ID_NEW"},
{ERR_PACK(0,OCSP_F_CERT_STATUS_NEW,0),	"CERT_STATUS_NEW"},
{ERR_PACK(0,OCSP_F_D2I_OCSP_NONCE,0),	"D2I_OCSP_NONCE"},
{ERR_PACK(0,OCSP_F_OCSP_BASIC_VERIFY,0),	"OCSP_basic_verify"},
{ERR_PACK(0,OCSP_F_OCSP_CHECK_NONCE,0),	"OCSP_check_nonce"},
{ERR_PACK(0,OCSP_F_OCSP_RESPONSE_GET1_BASIC,0),	"OCSP_response_get1_basic"},
{ERR_PACK(0,OCSP_F_OCSP_SENDREQ_BIO,0),	"OCSP_sendreq_bio"},
{ERR_PACK(0,OCSP_F_REQUEST_VERIFY,0),	"REQUEST_VERIFY"},
{ERR_PACK(0,OCSP_F_RESPONSE_VERIFY,0),	"RESPONSE_VERIFY"},
{ERR_PACK(0,OCSP_F_S2I_OCSP_NONCE,0),	"S2I_OCSP_NONCE"},
{ERR_PACK(0,OCSP_F_V2I_OCSP_CRLID,0),	"V2I_OCSP_CRLID"},
{0,NULL}
	};

static ERR_STRING_DATA OCSP_str_reasons[]=
	{
{OCSP_R_BAD_DATA                         ,"bad data"},
{OCSP_R_BAD_TAG                          ,"bad tag"},
{OCSP_R_CERTIFICATE_VERIFY_ERROR         ,"certificate verify error"},
{OCSP_R_DIGEST_ERR                       ,"digest err"},
{OCSP_R_FAILED_TO_OPEN                   ,"failed to open"},
{OCSP_R_FAILED_TO_READ                   ,"failed to read"},
{OCSP_R_FAILED_TO_STAT                   ,"failed to stat"},
{OCSP_R_MISSING_VALUE                    ,"missing value"},
{OCSP_R_NONCE_MISSING_IN_RESPONSE        ,"nonce missing in response"},
{OCSP_R_NONCE_VALUE_MISMATCH             ,"nonce value mismatch"},
{OCSP_R_NOT_BASIC_RESPONSE               ,"not basic response"},
{OCSP_R_NO_CERTIFICATE                   ,"no certificate"},
{OCSP_R_NO_CONTENT                       ,"no content"},
{OCSP_R_NO_PUBLIC_KEY                    ,"no public key"},
{OCSP_R_NO_RESPONSE_DATA                 ,"no response data"},
{OCSP_R_NO_SIGNATURE                     ,"no signature"},
{OCSP_R_REVOKED_NO_TIME                  ,"revoked no time"},
{OCSP_R_ROOT_CA_NOT_TRUSTED              ,"root ca not trusted"},
{OCSP_R_SERVER_READ_ERROR                ,"server read error"},
{OCSP_R_SERVER_RESPONSE_ERROR            ,"server response error"},
{OCSP_R_SERVER_RESPONSE_PARSE_ERROR      ,"server response parse error"},
{OCSP_R_SERVER_WRITE_ERROR               ,"server write error"},
{OCSP_R_SIGNATURE_FAILURE                ,"signature failure"},
{OCSP_R_SIGNER_CERTIFICATE_NOT_FOUND     ,"signer certificate not found"},
{OCSP_R_UNEXPECTED_NONCE_IN_RESPONSE     ,"unexpected nonce in response"},
{OCSP_R_UNKNOWN_NID                      ,"unknown nid"},
{OCSP_R_UNSUPPORTED_OPTION               ,"unsupported option"},
{OCSP_R_VALUE_ALREADY                    ,"value already"},
{0,NULL}
	};

#endif

void ERR_load_OCSP_strings(void)
	{
	static int init=1;

	if (init)
		{
		init=0;
#ifndef NO_ERR
		ERR_load_strings(ERR_LIB_OCSP,OCSP_str_functs);
		ERR_load_strings(ERR_LIB_OCSP,OCSP_str_reasons);
#endif

		}
	}
