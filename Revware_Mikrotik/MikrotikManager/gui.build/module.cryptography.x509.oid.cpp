/* Generated code for Python source for module 'cryptography.x509.oid'
 * created by Nuitka version 0.5.32.5
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_cryptography$x509$oid is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$x509$oid;
PyDictObject *moduledict_cryptography$x509$oid;

/* The module constants used, if any. */
static PyObject *const_tuple_str_digest_43872ccea6747842372df8a1c4656683_tuple;
static PyObject *const_str_plain_certificatePolicies;
static PyObject *const_str_digest_c0c0b06f4a096cb9cc1becef6ebea806;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain__name;
static PyObject *const_str_digest_aa35b543e4cc4067ce2da705a47d19ca;
static PyObject *const_str_digest_bf0a391ed0a4489c54a838031c5929be;
static PyObject *const_str_plain_commonName;
static PyObject *const_str_digest_c2fb55a1f09e586fc82a97de6fc73acc;
static PyObject *const_str_digest_0f59f576526d1d0c3e712a7f737c95cb;
extern PyObject *const_str_plain_DSA_WITH_SHA224;
extern PyObject *const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
extern PyObject *const_tuple_str_plain_utils_tuple;
static PyObject *const_str_plain_countryName;
static PyObject *const_str_digest_e13ae27d769f6d1d70b1707fbd3f347b;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_plain_policyMappings;
static PyObject *const_tuple_str_digest_bf7a54fbdb0b05505b05e9611f5ae528_tuple;
static PyObject *const_tuple_str_digest_60aaecf634db9b67af6a393dcf6de000_tuple;
extern PyObject *const_str_plain_SERIAL_NUMBER;
static PyObject *const_str_plain_JURISDICTION_LOCALITY_NAME;
extern PyObject *const_str_plain_CRLEntryExtensionOID;
extern PyObject *const_str_plain_KEY_USAGE;
static PyObject *const_str_plain_signedCertificateTimestampList;
static PyObject *const_tuple_str_digest_ddbc81b7b0b155d69df8105b5cff8140_tuple;
static PyObject *const_str_plain_STREET_ADDRESS;
extern PyObject *const_str_plain___ne__;
static PyObject *const_tuple_str_digest_851be9911219ad6068e49143d3248889_tuple;
static PyObject *const_tuple_str_digest_43752e38edbd8a4cc26d98a0eaea7118_tuple;
static PyObject *const_tuple_str_digest_abe352de3ffbaa69a49d347e2acd1e80_tuple;
static PyObject *const_tuple_str_digest_e4fbe04d850088683fca472ae668e3e8_tuple;
static PyObject *const_tuple_str_digest_3d2ee337e9731ea21bdde6fb3248081f_tuple;
extern PyObject *const_str_plain_hashes;
static PyObject *const_str_plain_issuerAltName;
static PyObject *const_str_plain__OID_NAMES;
static PyObject *const_str_digest_9593fac7fba92df6a4af11a09356bc08;
static PyObject *const_str_plain_clientAuth;
static PyObject *const_tuple_str_digest_43626b342da00ed10ddfece11d183700_tuple;
extern PyObject *const_tuple_str_dot_tuple;
static PyObject *const_str_plain_cRLDistributionPoints;
static PyObject *const_tuple_str_plain_ObjectIdentifier_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_8004dc93b6b3bd5578dfd84dda8defdc;
static PyObject *const_str_digest_ced7dfea6e2ba0f172c63b367fc544eb;
extern PyObject *const_str_digest_bf7a54fbdb0b05505b05e9611f5ae528;
extern PyObject *const_str_plain_ECDSA_WITH_SHA384;
extern PyObject *const_str_plain_ORGANIZATION_NAME;
static PyObject *const_str_plain_postalAddress;
static PyObject *const_str_plain_organizationalUnitName;
static PyObject *const_str_plain_sha512WithRSAEncryption;
static PyObject *const_tuple_str_digest_9cd8ba296cec323cf723a82cc76d4826_tuple;
extern PyObject *const_str_plain_ANY_POLICY;
static PyObject *const_str_plain_cRLNumber;
extern PyObject *const_str_plain_GENERATION_QUALIFIER;
static PyObject *const_str_digest_bfabc35e33098bc3bd4a248a68700379;
static PyObject *const_str_digest_2958a1ef6593e1758ab759e3a2c573e0;
extern PyObject *const_str_plain_POLICY_MAPPINGS;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_digest_bfabc35e33098bc3bd4a248a68700379_tuple;
static PyObject *const_str_digest_0376a15beee26a285b06cab589a6a7cd;
static PyObject *const_tuple_str_digest_c3b73ca09086726c1f01ebb5162d733b_tuple;
static PyObject *const_str_digest_43752e38edbd8a4cc26d98a0eaea7118;
static PyObject *const_str_digest_8c8a2a5fe21909055ee3a38044fbeaa0;
static PyObject *const_tuple_str_digest_163cafdc0ed554748c9a4b5a8c664335_tuple;
extern PyObject *const_str_plain_SHA384;
static PyObject *const_tuple_str_digest_7aeeff5313ae33015bc6068c49b2834d_tuple;
extern PyObject *const_str_plain_CPS_QUALIFIER;
static PyObject *const_tuple_str_digest_0376a15beee26a285b06cab589a6a7cd_tuple;
static PyObject *const_str_plain_nameConstraints;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_str_digest_5f81f25c17be8379db8d57e313b947b2_tuple;
extern PyObject *const_str_plain_OCSP_NO_CHECK;
static PyObject *const_str_digest_d987020246f2d9f737862dd92bc63eef;
static PyObject *const_str_digest_767d9ff9e747b20f9b2a62cdf04da0de;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_GIVEN_NAME;
extern PyObject *const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES;
extern PyObject *const_str_plain_ECDSA_WITH_SHA256;
static PyObject *const_str_digest_81ded7bbfd939cddeb47d500a53437b8;
static PyObject *const_str_digest_d276e487e55b7f956e2f735a941b29b1;
extern PyObject *const_str_plain___hash__;
static PyObject *const_tuple_str_digest_b0abccc6631aa6b85de08f4a664daadd_tuple;
static PyObject *const_tuple_str_digest_8c8a2a5fe21909055ee3a38044fbeaa0_tuple;
static PyObject *const_tuple_str_digest_4e0fd9298619640af3a4dad2f13d8f89_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_SURNAME;
extern PyObject *const_str_plain_other;
static PyObject *const_tuple_str_digest_50321ff2fccee4024d98999f9c8d9feb_tuple;
extern PyObject *const_tuple_str_plain_hashes_tuple;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_e1378b6a93344d0d02f5fc8acfacacd7;
static PyObject *const_str_plain_ANY_EXTENDED_KEY_USAGE;
static PyObject *const_tuple_str_digest_42920d8d1815b6383c6613f7be148048_tuple;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_int_pos_40;
static PyObject *const_str_digest_60aaecf634db9b67af6a393dcf6de000;
static PyObject *const_str_digest_57dccc3876eef2cf5cfce321a32febb5;
static PyObject *const_str_plain_caIssuers;
extern PyObject *const_str_plain_property;
static PyObject *const_tuple_str_digest_0779a69d82c4a51e4fdc8382116baf07_tuple;
extern PyObject *const_str_plain_format;
static PyObject *const_tuple_str_digest_9593fac7fba92df6a4af11a09356bc08_tuple;
static PyObject *const_tuple_str_digest_178f043eb8a7ce81b9dfbff61f4c5f19_tuple;
extern PyObject *const_str_plain_ExtensionOID;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_CRL_DISTRIBUTION_POINTS;
static PyObject *const_str_digest_1ca6abdf9952a7d39297c45ba720642a;
extern PyObject *const_str_plain_LOCALITY_NAME;
static PyObject *const_str_plain_emailProtection;
extern PyObject *const_str_plain_CERTIFICATE_ISSUER;
static PyObject *const_str_digest_d766128dd3b188cb31a47f2b60d4f03b;
static PyObject *const_str_digest_c3b73ca09086726c1f01ebb5162d733b;
extern PyObject *const_str_plain_POLICY_CONSTRAINTS;
extern PyObject *const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
static PyObject *const_str_digest_b84a8ae3bdd5ed5249d61bfca24aa504;
static PyObject *const_tuple_str_plain_ExtensionOID_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_07bbedf6f84f3fc5867dc620be5e095a;
static PyObject *const_tuple_str_digest_76c946398dd022b7261d46aa6240716f_tuple;
static PyObject *const_str_plain_localityName;
static PyObject *const_str_digest_5f81f25c17be8379db8d57e313b947b2;
static PyObject *const_str_plain_serverAuth;
static PyObject *const_tuple_str_digest_81ded7bbfd939cddeb47d500a53437b8_tuple;
static PyObject *const_tuple_str_digest_f57d825cad34aac5809c155ba8a3ebb1_tuple;
extern PyObject *const_str_plain_PRECERT_SIGNED_CERTIFICATE_TIMESTAMPS;
static PyObject *const_tuple_str_digest_b84a8ae3bdd5ed5249d61bfca24aa504_tuple;
static PyObject *const_tuple_86f0dc99599489f82a87faea8a06811c_tuple;
static PyObject *const_tuple_str_digest_87cdc7b3da2a01efa67fc002f5f9e93d_tuple;
extern PyObject *const_str_plain_CA_ISSUERS;
extern PyObject *const_str_plain_RSA_WITH_SHA384;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_str_digest_bdfb3765c1e356e48168ea62bfdbf9a4_tuple;
static PyObject *const_str_plain_md5WithRSAEncryption;
static PyObject *const_tuple_str_digest_35eb25ced2ccdf6bcc44b71ddad61958_tuple;
static PyObject *const_str_digest_91f2c2e6a76ab0257b7afd78a7d8444b;
extern PyObject *const_str_plain_ECDSA_WITH_SHA1;
static PyObject *const_str_digest_3d2ee337e9731ea21bdde6fb3248081f;
static PyObject *const_str_digest_7aeeff5313ae33015bc6068c49b2834d;
static PyObject *const_str_digest_f452289eeaecab0c5424fd5ec7db97f7;
extern PyObject *const_str_plain_STATE_OR_PROVINCE_NAME;
static PyObject *const_str_plain_organizationName;
static PyObject *const_tuple_str_digest_8cf8f3c54a257961a23b52b084d86cec_tuple;
static PyObject *const_str_plain_sha224WithRSAEncryption;
static PyObject *const_str_plain_extendedKeyUsage;
static PyObject *const_str_digest_7f9fa75ff292bac6aecf30cc58bc9469;
extern PyObject *const_str_plain_SHA512;
static PyObject *const_tuple_str_digest_d276e487e55b7f956e2f735a941b29b1_tuple;
extern PyObject *const_str_digest_777dc680c1db5aad08fab2430d7c4782;
static PyObject *const_str_plain__RSA_WITH_SHA1;
extern PyObject *const_str_plain_SUBJECT_KEY_IDENTIFIER;
extern PyObject *const_str_plain_EMAIL_ADDRESS;
static PyObject *const_str_digest_e8435c09f6f8bb5530cfada92d890563;
extern PyObject *const_str_plain_COUNTRY_NAME;
static PyObject *const_str_digest_35eb25ced2ccdf6bcc44b71ddad61958;
static PyObject *const_str_digest_76c946398dd022b7261d46aa6240716f;
static PyObject *const_tuple_str_digest_aa35b543e4cc4067ce2da705a47d19ca_tuple;
static PyObject *const_str_digest_caddb782481a854076d3f89e9c4846e8;
static PyObject *const_str_plain_subjectDirectoryAttributes;
static PyObject *const_tuple_str_digest_36815fa72b8e26b8a0343e58e525a6b8_tuple;
static PyObject *const_tuple_0cd458c1b602680a4d292d4a629be0a7_tuple;
static PyObject *const_str_digest_48bb56d35289ac7c69544408e253d64a;
static PyObject *const_str_digest_8cf8f3c54a257961a23b52b084d86cec;
static PyObject *const_tuple_str_digest_ced7dfea6e2ba0f172c63b367fc544eb_tuple;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_OCSP_SIGNING;
static PyObject *const_str_plain_keyUsage;
static PyObject *const_str_digest_852fec09bfab0354c97da9bfbb5b0b45;
static PyObject *const_str_plain_subjectAltName;
static PyObject *const_str_plain_X500_UNIQUE_IDENTIFIER;
static PyObject *const_str_digest_e69bc10a8fca5202a28e2cd518549779;
static PyObject *const_str_digest_50321ff2fccee4024d98999f9c8d9feb;
static PyObject *const_str_plain_authorityInfoAccess;
static PyObject *const_str_digest_851be9911219ad6068e49143d3248889;
static PyObject *const_str_plain_POSTAL_ADDRESS;
extern PyObject *const_str_plain___init__;
static PyObject *const_tuple_str_digest_07bbedf6f84f3fc5867dc620be5e095a_tuple;
static PyObject *const_str_plain_USER_ID;
extern PyObject *const_str_plain_DELTA_CRL_INDICATOR;
static PyObject *const_tuple_str_digest_c0c0b06f4a096cb9cc1becef6ebea806_tuple;
static PyObject *const_tuple_str_digest_cbb358e95676acbda1a7cec77811a76a_tuple;
static PyObject *const_str_digest_2998224fa424af08b3f684a1be17945c;
static PyObject *const_str_digest_9f975f715f271ffc97cba117d4ed2c89;
static PyObject *const_str_digest_402231cec73b599b9bdec4daf7775016;
static PyObject *const_tuple_str_digest_48bb56d35289ac7c69544408e253d64a_tuple;
static PyObject *const_str_plain_domainComponent;
static PyObject *const_str_digest_03e57fcfeaffac79e0551f43c9be177f;
static PyObject *const_str_digest_b9034be89ceffc7e47a52abddeb5f6bd;
static PyObject *const_tuple_str_digest_c721cd011be8e0f6c97e5d0f5ec94d60_tuple;
static PyObject *const_tuple_str_digest_aa13593fc87e4f4e4b2b52fd048b3e8a_tuple;
static PyObject *const_str_plain_cRLReason;
static PyObject *const_str_digest_c65f30c441db755c29a6af4980e8b725;
static PyObject *const_str_plain_postalCode;
extern PyObject *const_str_plain_CERTIFICATE_POLICIES;
static PyObject *const_str_digest_ad3c682658ab1bc2f4342a30cc4996e2;
static PyObject *const_str_plain_freshestCRL;
static PyObject *const_str_plain_policyConstraints;
static PyObject *const_str_digest_43626b342da00ed10ddfece11d183700;
static PyObject *const_str_digest_4d6b2240da355b093304532a38b9315b;
static PyObject *const_str_plain_sha1WithRSAEncryption;
extern PyObject *const_str_plain_RSA_WITH_SHA224;
static PyObject *const_tuple_str_digest_649afc4ad6dae06148c7e2d99bb38960_tuple;
static PyObject *const_str_plain_OCSPSigning;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_str_digest_03e57fcfeaffac79e0551f43c9be177f_tuple;
static PyObject *const_tuple_str_digest_d2f818cdf8c42e2d6390ddd53b016587_tuple;
static PyObject *const_str_plain_timeStamping;
static PyObject *const_tuple_str_digest_a690942c66e69d63578daefd13197ae2_tuple;
static PyObject *const_tuple_str_plain__dotted_string_tuple;
static PyObject *const_str_digest_43872ccea6747842372df8a1c4656683;
static PyObject *const_tuple_str_plain_CertificatePoliciesOID_tuple_type_object_tuple_tuple;
static PyObject *const_tuple_str_plain_CRLEntryExtensionOID_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_INHIBIT_ANY_POLICY;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_87cdc7b3da2a01efa67fc002f5f9e93d;
extern PyObject *const_str_plain_JURISDICTION_COUNTRY_NAME;
static PyObject *const_str_digest_163cafdc0ed554748c9a4b5a8c664335;
static PyObject *const_str_plain_businessCategory;
extern PyObject *const_str_plain_cryptography;
static PyObject *const_tuple_str_plain_SignatureAlgorithmOID_tuple_type_object_tuple_tuple;
static PyObject *const_str_plain_POSTAL_CODE;
static PyObject *const_tuple_str_digest_2b4acfbf018aa94fa2c4d751377b67ba_tuple;
static PyObject *const_str_plain_streetAddress;
extern PyObject *const_str_plain__SIG_OIDS_TO_HASH;
extern PyObject *const_str_plain_node;
extern PyObject *const_str_plain_SHA256;
static PyObject *const_str_plain_codeSigning;
static PyObject *const_tuple_str_digest_2998224fa424af08b3f684a1be17945c_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_tuple_str_digest_592f2dc8660724fc191cd3b965719e17_tuple;
extern PyObject *const_str_plain_SignatureAlgorithmOID;
static PyObject *const_str_digest_3df3ca64dd8761c027ed0ba43961e89a;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_digest_d987020246f2d9f737862dd92bc63eef_tuple;
static PyObject *const_str_digest_c0030236ac728e19ca4e60cb208261c6;
static PyObject *const_tuple_str_digest_0289302dc46017fd66759aa38355e887_tuple;
extern PyObject *const_str_plain_append;
static PyObject *const_str_digest_592f2dc8660724fc191cd3b965719e17;
static PyObject *const_str_plain_serialNumber;
extern PyObject *const_str_plain_SUBJECT_INFORMATION_ACCESS;
static PyObject *const_str_digest_d03446569431a2d7e5a8eb6f1a6c779c;
static PyObject *const_str_plain_BUSINESS_CATEGORY;
static PyObject *const_str_plain_userID;
extern PyObject *const_str_plain_NAME_CONSTRAINTS;
extern PyObject *const_str_plain_FRESHEST_CRL;
static PyObject *const_str_digest_65069b4fb9aa28cf3d80a60f2197040c;
static PyObject *const_str_digest_c721cd011be8e0f6c97e5d0f5ec94d60;
static PyObject *const_str_plain_sha384WithRSAEncryption;
static PyObject *const_str_digest_abe352de3ffbaa69a49d347e2acd1e80;
static PyObject *const_tuple_str_digest_7f9fa75ff292bac6aecf30cc58bc9469_tuple;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_DN_QUALIFIER;
extern PyObject *const_str_plain_RSA_WITH_SHA256;
extern PyObject *const_str_plain_TLS_FEATURE;
extern PyObject *const_str_plain_OCSP;
static PyObject *const_str_plain_jurisdictionStateOrProvinceName;
extern PyObject *const_str_plain_SHA224;
static PyObject *const_str_digest_32f8ab72218c1518444529b9839bc60e;
extern PyObject *const_str_plain_EMAIL_PROTECTION;
static PyObject *const_str_digest_42920d8d1815b6383c6613f7be148048;
extern PyObject *const_str_plain_AuthorityInformationAccessOID;
static PyObject *const_str_digest_540fbcea024364d9d18527e75b78cb8a;
extern PyObject *const_str_plain_SHA1;
static PyObject *const_tuple_str_digest_d766128dd3b188cb31a47f2b60d4f03b_tuple;
static PyObject *const_tuple_str_digest_e69bc10a8fca5202a28e2cd518549779_tuple;
static PyObject *const_str_digest_b0abccc6631aa6b85de08f4a664daadd;
extern PyObject *const_str_plain_dotted_string;
static PyObject *const_str_plain_sha256WithRSAEncryption;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_surname;
static PyObject *const_str_digest_1135dc3548cae245667224b61d063e8f;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_digest_777dc680c1db5aad08fab2430d7c4782_tuple;
static PyObject *const_tuple_str_digest_57dccc3876eef2cf5cfce321a32febb5_tuple;
static PyObject *const_str_digest_a0b774c3e9788e9c20a69f9b798eb899;
static PyObject *const_tuple_str_digest_4d1eecda490e15d970f849aecc70bec4_tuple;
static PyObject *const_str_plain_JURISDICTION_STATE_OR_PROVINCE_NAME;
static PyObject *const_str_digest_4d1eecda490e15d970f849aecc70bec4;
extern PyObject *const_str_plain_EXTENDED_KEY_USAGE;
static PyObject *const_tuple_str_digest_c65f30c441db755c29a6af4980e8b725_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_digest_175c6aa0dbff49caa0d29fca6c1fdbb2;
static PyObject *const_tuple_str_digest_2958a1ef6593e1758ab759e3a2c573e0_tuple;
extern PyObject *const_str_plain_COMMON_NAME;
extern PyObject *const_str_plain_read_only_property;
static PyObject *const_str_plain_jurisdictionLocalityName;
static PyObject *const_str_plain_jurisdictionCountryName;
static PyObject *const_str_digest_aa13593fc87e4f4e4b2b52fd048b3e8a;
static PyObject *const_tuple_str_digest_91f2c2e6a76ab0257b7afd78a7d8444b_tuple;
extern PyObject *const_str_plain_SUBJECT_ALTERNATIVE_NAME;
static PyObject *const_str_digest_178f043eb8a7ce81b9dfbff61f4c5f19;
extern PyObject *const_str_plain_CLIENT_AUTH;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_INVALIDITY_DATE;
static PyObject *const_str_digest_649afc4ad6dae06148c7e2d99bb38960;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_digest_4e0fd9298619640af3a4dad2f13d8f89;
static PyObject *const_str_digest_7bf3755c297bacd02e1889e435f6a646;
static PyObject *const_str_plain_inhibitAnyPolicy;
extern PyObject *const_str_plain_ISSUER_ALTERNATIVE_NAME;
extern PyObject *const_str_plain_SERVER_AUTH;
static PyObject *const_tuple_str_digest_2bb014389d4aa5909b80bc2e19c3df8a_tuple;
static PyObject *const_tuple_str_digest_1135dc3548cae245667224b61d063e8f_tuple;
extern PyObject *const_str_plain_ECDSA_WITH_SHA224;
static PyObject *const_tuple_str_digest_e8435c09f6f8bb5530cfada92d890563_tuple;
static PyObject *const_tuple_str_digest_65069b4fb9aa28cf3d80a60f2197040c_tuple;
static PyObject *const_tuple_str_digest_fbb6e1cc86dd0b99c46a7f9000416d62_tuple;
static PyObject *const_str_digest_e4fbe04d850088683fca472ae668e3e8;
static PyObject *const_str_digest_f0466168cc522d6329cd664ce084d453;
static PyObject *const_str_plain_dnQualifier;
static PyObject *const_str_plain_subjectKeyIdentifier;
static PyObject *const_str_plain_certificateIssuer;
static PyObject *const_str_digest_ff3f390793cb3f7a65e3ba0d8b30034e;
extern PyObject *const_str_plain_CRL_NUMBER;
extern PyObject *const_str_plain_MD5;
static PyObject *const_str_digest_0289302dc46017fd66759aa38355e887;
static PyObject *const_str_digest_017b3818c501a0f2bbf7f46bc35fb8d6;
static PyObject *const_str_digest_557b29feaadb5ada1ad965906e5d1dd3;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_dot;
static PyObject *const_str_digest_d2f818cdf8c42e2d6390ddd53b016587;
static PyObject *const_str_digest_fbb6e1cc86dd0b99c46a7f9000416d62;
static PyObject *const_str_digest_9cd8ba296cec323cf723a82cc76d4826;
static PyObject *const_tuple_str_digest_1ca6abdf9952a7d39297c45ba720642a_tuple;
static PyObject *const_str_digest_e00b2e9d0b3aff0d7f1215741c8caf4c;
static PyObject *const_str_digest_a690942c66e69d63578daefd13197ae2;
static PyObject *const_tuple_str_digest_017b3818c501a0f2bbf7f46bc35fb8d6_tuple;
extern PyObject *const_str_plain_CODE_SIGNING;
static PyObject *const_tuple_str_digest_8004dc93b6b3bd5578dfd84dda8defdc_tuple;
extern PyObject *const_str_plain_RSA_WITH_SHA512;
extern PyObject *const_str_plain_CPS_USER_NOTICE;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
static PyObject *const_str_plain__dotted_string;
static PyObject *const_str_digest_bdfb3765c1e356e48168ea62bfdbf9a4;
extern PyObject *const_str_plain_CRL_REASON;
static PyObject *const_str_plain_invalidityDate;
static PyObject *const_str_digest_36815fa72b8e26b8a0343e58e525a6b8;
static PyObject *const_str_plain_subjectInfoAccess;
extern PyObject *const_str_plain_TITLE;
static PyObject *const_str_plain_deltaCRLIndicator;
extern PyObject *const_str_plain_ExtendedKeyUsageOID;
static PyObject *const_str_digest_2b4acfbf018aa94fa2c4d751377b67ba;
static PyObject *const_tuple_str_digest_9f975f715f271ffc97cba117d4ed2c89_tuple;
extern PyObject *const_str_plain_title;
static PyObject *const_str_digest_0779a69d82c4a51e4fdc8382116baf07;
static PyObject *const_str_digest_7e1cd35ea5517b9b5d7382f57546e80b;
static PyObject *const_str_plain_pseudonym;
static PyObject *const_tuple_str_digest_e00b2e9d0b3aff0d7f1215741c8caf4c_tuple;
extern PyObject *const_str_plain_BASIC_CONSTRAINTS;
extern PyObject *const_str_plain_PSEUDONYM;
static PyObject *const_str_digest_17ca6fd46f3d026f6114676b663f8acd;
extern PyObject *const_str_plain_TLSFeature;
extern PyObject *const_str_plain_CertificatePoliciesOID;
extern PyObject *const_str_plain___eq__;
static PyObject *const_str_digest_f57d825cad34aac5809c155ba8a3ebb1;
static PyObject *const_tuple_str_digest_767d9ff9e747b20f9b2a62cdf04da0de_tuple;
extern PyObject *const_str_plain_TIME_STAMPING;
static PyObject *const_tuple_str_digest_32f8ab72218c1518444529b9839bc60e_tuple;
static PyObject *const_str_plain_intnodes;
static PyObject *const_str_plain_stateOrProvinceName;
extern PyObject *const_str_plain_NameOID;
extern PyObject *const_str_plain_ORGANIZATIONAL_UNIT_NAME;
static PyObject *const_str_plain_authorityKeyIdentifier;
extern PyObject *const_str_plain_OCSPNoCheck;
extern PyObject *const_str_digest_cbb358e95676acbda1a7cec77811a76a;
static PyObject *const_tuple_str_digest_175c6aa0dbff49caa0d29fca6c1fdbb2_tuple;
extern PyObject *const_str_plain_ObjectIdentifier;
static PyObject *const_str_digest_71c6ff0a892bea1ac9692e0ad204c0d0;
static PyObject *const_tuple_str_digest_402231cec73b599b9bdec4daf7775016_tuple;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_DSA_WITH_SHA256;
static PyObject *const_tuple_str_plain_ExtendedKeyUsageOID_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_ddbc81b7b0b155d69df8105b5cff8140;
extern PyObject *const_str_plain_nodes;
static PyObject *const_tuple_str_digest_0f59f576526d1d0c3e712a7f737c95cb_tuple;
static PyObject *const_str_digest_10a263591d80ff02d463da6ebd05548d;
extern PyObject *const_str_plain_AUTHORITY_INFORMATION_ACCESS;
extern PyObject *const_str_plain_RSA_WITH_SHA1;
static PyObject *const_str_plain_x500UniqueIdentifier;
static PyObject *const_str_digest_2bb014389d4aa5909b80bc2e19c3df8a;
static PyObject *const_str_plain_generationQualifier;
extern PyObject *const_str_plain_DSA_WITH_SHA1;
static PyObject *const_str_plain_basicConstraints;
static PyObject *const_tuple_str_digest_6cf4c807f183a057576c391d9f7c4e24_tuple;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_DOMAIN_COMPONENT;
extern PyObject *const_str_plain_ECDSA_WITH_SHA512;
static PyObject *const_str_digest_37e39c7d44ed2301659b6cf91e2dbebe;
static PyObject *const_str_digest_6cf4c807f183a057576c391d9f7c4e24;
extern PyObject *const_str_plain_RSA_WITH_MD5;
static PyObject *const_str_digest_8c168ca0bdafd4e71f4b6bf87eb46ded;
static PyObject *const_str_plain_givenName;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_RSASSA_PSS;
static PyObject *const_tuple_str_plain_NameOID_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_AUTHORITY_KEY_IDENTIFIER;
static PyObject *const_str_plain_emailAddress;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_digest_43872ccea6747842372df8a1c4656683_tuple = PyTuple_New( 1 );
    const_str_digest_43872ccea6747842372df8a1c4656683 = UNSTREAM_STRING( &constant_bin[ 179537 ], 8, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_43872ccea6747842372df8a1c4656683_tuple, 0, const_str_digest_43872ccea6747842372df8a1c4656683 ); Py_INCREF( const_str_digest_43872ccea6747842372df8a1c4656683 );
    const_str_plain_certificatePolicies = UNSTREAM_STRING( &constant_bin[ 179545 ], 19, 1 );
    const_str_digest_c0c0b06f4a096cb9cc1becef6ebea806 = UNSTREAM_STRING( &constant_bin[ 179564 ], 8, 0 );
    const_str_digest_aa35b543e4cc4067ce2da705a47d19ca = UNSTREAM_STRING( &constant_bin[ 179572 ], 8, 0 );
    const_str_digest_bf0a391ed0a4489c54a838031c5929be = UNSTREAM_STRING( &constant_bin[ 179580 ], 11, 0 );
    const_str_plain_commonName = UNSTREAM_STRING( &constant_bin[ 179591 ], 10, 1 );
    const_str_digest_c2fb55a1f09e586fc82a97de6fc73acc = UNSTREAM_STRING( &constant_bin[ 179601 ], 15, 0 );
    const_str_digest_0f59f576526d1d0c3e712a7f737c95cb = UNSTREAM_STRING( &constant_bin[ 26424 ], 21, 0 );
    const_str_plain_countryName = UNSTREAM_STRING( &constant_bin[ 179616 ], 11, 1 );
    const_str_digest_e13ae27d769f6d1d70b1707fbd3f347b = UNSTREAM_STRING( &constant_bin[ 179627 ], 13, 0 );
    const_str_plain_policyMappings = UNSTREAM_STRING( &constant_bin[ 179640 ], 14, 1 );
    const_tuple_str_digest_bf7a54fbdb0b05505b05e9611f5ae528_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_bf7a54fbdb0b05505b05e9611f5ae528_tuple, 0, const_str_digest_bf7a54fbdb0b05505b05e9611f5ae528 ); Py_INCREF( const_str_digest_bf7a54fbdb0b05505b05e9611f5ae528 );
    const_tuple_str_digest_60aaecf634db9b67af6a393dcf6de000_tuple = PyTuple_New( 1 );
    const_str_digest_60aaecf634db9b67af6a393dcf6de000 = UNSTREAM_STRING( &constant_bin[ 179654 ], 8, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_60aaecf634db9b67af6a393dcf6de000_tuple, 0, const_str_digest_60aaecf634db9b67af6a393dcf6de000 ); Py_INCREF( const_str_digest_60aaecf634db9b67af6a393dcf6de000 );
    const_str_plain_JURISDICTION_LOCALITY_NAME = UNSTREAM_STRING( &constant_bin[ 179662 ], 26, 1 );
    const_str_plain_signedCertificateTimestampList = UNSTREAM_STRING( &constant_bin[ 179688 ], 30, 1 );
    const_tuple_str_digest_ddbc81b7b0b155d69df8105b5cff8140_tuple = PyTuple_New( 1 );
    const_str_digest_ddbc81b7b0b155d69df8105b5cff8140 = UNSTREAM_STRING( &constant_bin[ 179718 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ddbc81b7b0b155d69df8105b5cff8140_tuple, 0, const_str_digest_ddbc81b7b0b155d69df8105b5cff8140 ); Py_INCREF( const_str_digest_ddbc81b7b0b155d69df8105b5cff8140 );
    const_str_plain_STREET_ADDRESS = UNSTREAM_STRING( &constant_bin[ 179727 ], 14, 1 );
    const_tuple_str_digest_851be9911219ad6068e49143d3248889_tuple = PyTuple_New( 1 );
    const_str_digest_851be9911219ad6068e49143d3248889 = UNSTREAM_STRING( &constant_bin[ 26642 ], 19, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_851be9911219ad6068e49143d3248889_tuple, 0, const_str_digest_851be9911219ad6068e49143d3248889 ); Py_INCREF( const_str_digest_851be9911219ad6068e49143d3248889 );
    const_tuple_str_digest_43752e38edbd8a4cc26d98a0eaea7118_tuple = PyTuple_New( 1 );
    const_str_digest_43752e38edbd8a4cc26d98a0eaea7118 = UNSTREAM_STRING( &constant_bin[ 179741 ], 8, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_43752e38edbd8a4cc26d98a0eaea7118_tuple, 0, const_str_digest_43752e38edbd8a4cc26d98a0eaea7118 ); Py_INCREF( const_str_digest_43752e38edbd8a4cc26d98a0eaea7118 );
    const_tuple_str_digest_abe352de3ffbaa69a49d347e2acd1e80_tuple = PyTuple_New( 1 );
    const_str_digest_abe352de3ffbaa69a49d347e2acd1e80 = UNSTREAM_STRING( &constant_bin[ 179749 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_abe352de3ffbaa69a49d347e2acd1e80_tuple, 0, const_str_digest_abe352de3ffbaa69a49d347e2acd1e80 ); Py_INCREF( const_str_digest_abe352de3ffbaa69a49d347e2acd1e80 );
    const_tuple_str_digest_e4fbe04d850088683fca472ae668e3e8_tuple = PyTuple_New( 1 );
    const_str_digest_e4fbe04d850088683fca472ae668e3e8 = UNSTREAM_STRING( &constant_bin[ 179537 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e4fbe04d850088683fca472ae668e3e8_tuple, 0, const_str_digest_e4fbe04d850088683fca472ae668e3e8 ); Py_INCREF( const_str_digest_e4fbe04d850088683fca472ae668e3e8 );
    const_tuple_str_digest_3d2ee337e9731ea21bdde6fb3248081f_tuple = PyTuple_New( 1 );
    const_str_digest_3d2ee337e9731ea21bdde6fb3248081f = UNSTREAM_STRING( &constant_bin[ 179766 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_3d2ee337e9731ea21bdde6fb3248081f_tuple, 0, const_str_digest_3d2ee337e9731ea21bdde6fb3248081f ); Py_INCREF( const_str_digest_3d2ee337e9731ea21bdde6fb3248081f );
    const_str_plain_issuerAltName = UNSTREAM_STRING( &constant_bin[ 179783 ], 13, 1 );
    const_str_plain__OID_NAMES = UNSTREAM_STRING( &constant_bin[ 179796 ], 10, 1 );
    const_str_digest_9593fac7fba92df6a4af11a09356bc08 = UNSTREAM_STRING( &constant_bin[ 179806 ], 8, 0 );
    const_str_plain_clientAuth = UNSTREAM_STRING( &constant_bin[ 179814 ], 10, 1 );
    const_tuple_str_digest_43626b342da00ed10ddfece11d183700_tuple = PyTuple_New( 1 );
    const_str_digest_43626b342da00ed10ddfece11d183700 = UNSTREAM_STRING( &constant_bin[ 179824 ], 8, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_43626b342da00ed10ddfece11d183700_tuple, 0, const_str_digest_43626b342da00ed10ddfece11d183700 ); Py_INCREF( const_str_digest_43626b342da00ed10ddfece11d183700 );
    const_str_plain_cRLDistributionPoints = UNSTREAM_STRING( &constant_bin[ 179832 ], 21, 1 );
    const_tuple_str_plain_ObjectIdentifier_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ObjectIdentifier_tuple_type_object_tuple_tuple, 0, const_str_plain_ObjectIdentifier ); Py_INCREF( const_str_plain_ObjectIdentifier );
    PyTuple_SET_ITEM( const_tuple_str_plain_ObjectIdentifier_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_8004dc93b6b3bd5578dfd84dda8defdc = UNSTREAM_STRING( &constant_bin[ 179853 ], 9, 0 );
    const_str_digest_ced7dfea6e2ba0f172c63b367fc544eb = UNSTREAM_STRING( &constant_bin[ 179862 ], 17, 0 );
    const_str_plain_postalAddress = UNSTREAM_STRING( &constant_bin[ 179879 ], 13, 1 );
    const_str_plain_organizationalUnitName = UNSTREAM_STRING( &constant_bin[ 179892 ], 22, 1 );
    const_str_plain_sha512WithRSAEncryption = UNSTREAM_STRING( &constant_bin[ 179914 ], 23, 1 );
    const_tuple_str_digest_9cd8ba296cec323cf723a82cc76d4826_tuple = PyTuple_New( 1 );
    const_str_digest_9cd8ba296cec323cf723a82cc76d4826 = UNSTREAM_STRING( &constant_bin[ 179937 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9cd8ba296cec323cf723a82cc76d4826_tuple, 0, const_str_digest_9cd8ba296cec323cf723a82cc76d4826 ); Py_INCREF( const_str_digest_9cd8ba296cec323cf723a82cc76d4826 );
    const_str_plain_cRLNumber = UNSTREAM_STRING( &constant_bin[ 179946 ], 9, 1 );
    const_str_digest_bfabc35e33098bc3bd4a248a68700379 = UNSTREAM_STRING( &constant_bin[ 179955 ], 17, 0 );
    const_str_digest_2958a1ef6593e1758ab759e3a2c573e0 = UNSTREAM_STRING( &constant_bin[ 179972 ], 9, 0 );
    const_tuple_str_digest_bfabc35e33098bc3bd4a248a68700379_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_bfabc35e33098bc3bd4a248a68700379_tuple, 0, const_str_digest_bfabc35e33098bc3bd4a248a68700379 ); Py_INCREF( const_str_digest_bfabc35e33098bc3bd4a248a68700379 );
    const_str_digest_0376a15beee26a285b06cab589a6a7cd = UNSTREAM_STRING( &constant_bin[ 179981 ], 17, 0 );
    const_tuple_str_digest_c3b73ca09086726c1f01ebb5162d733b_tuple = PyTuple_New( 1 );
    const_str_digest_c3b73ca09086726c1f01ebb5162d733b = UNSTREAM_STRING( &constant_bin[ 26712 ], 19, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c3b73ca09086726c1f01ebb5162d733b_tuple, 0, const_str_digest_c3b73ca09086726c1f01ebb5162d733b ); Py_INCREF( const_str_digest_c3b73ca09086726c1f01ebb5162d733b );
    const_str_digest_8c8a2a5fe21909055ee3a38044fbeaa0 = UNSTREAM_STRING( &constant_bin[ 179998 ], 24, 0 );
    const_tuple_str_digest_163cafdc0ed554748c9a4b5a8c664335_tuple = PyTuple_New( 1 );
    const_str_digest_163cafdc0ed554748c9a4b5a8c664335 = UNSTREAM_STRING( &constant_bin[ 180022 ], 24, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_163cafdc0ed554748c9a4b5a8c664335_tuple, 0, const_str_digest_163cafdc0ed554748c9a4b5a8c664335 ); Py_INCREF( const_str_digest_163cafdc0ed554748c9a4b5a8c664335 );
    const_tuple_str_digest_7aeeff5313ae33015bc6068c49b2834d_tuple = PyTuple_New( 1 );
    const_str_digest_7aeeff5313ae33015bc6068c49b2834d = UNSTREAM_STRING( &constant_bin[ 180046 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7aeeff5313ae33015bc6068c49b2834d_tuple, 0, const_str_digest_7aeeff5313ae33015bc6068c49b2834d ); Py_INCREF( const_str_digest_7aeeff5313ae33015bc6068c49b2834d );
    const_tuple_str_digest_0376a15beee26a285b06cab589a6a7cd_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0376a15beee26a285b06cab589a6a7cd_tuple, 0, const_str_digest_0376a15beee26a285b06cab589a6a7cd ); Py_INCREF( const_str_digest_0376a15beee26a285b06cab589a6a7cd );
    const_str_plain_nameConstraints = UNSTREAM_STRING( &constant_bin[ 180055 ], 15, 1 );
    const_tuple_str_digest_5f81f25c17be8379db8d57e313b947b2_tuple = PyTuple_New( 1 );
    const_str_digest_5f81f25c17be8379db8d57e313b947b2 = UNSTREAM_STRING( &constant_bin[ 180070 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_5f81f25c17be8379db8d57e313b947b2_tuple, 0, const_str_digest_5f81f25c17be8379db8d57e313b947b2 ); Py_INCREF( const_str_digest_5f81f25c17be8379db8d57e313b947b2 );
    const_str_digest_d987020246f2d9f737862dd92bc63eef = UNSTREAM_STRING( &constant_bin[ 180079 ], 25, 0 );
    const_str_digest_767d9ff9e747b20f9b2a62cdf04da0de = UNSTREAM_STRING( &constant_bin[ 180104 ], 9, 0 );
    const_str_digest_81ded7bbfd939cddeb47d500a53437b8 = UNSTREAM_STRING( &constant_bin[ 180113 ], 24, 0 );
    const_str_digest_d276e487e55b7f956e2f735a941b29b1 = UNSTREAM_STRING( &constant_bin[ 26745 ], 22, 0 );
    const_tuple_str_digest_b0abccc6631aa6b85de08f4a664daadd_tuple = PyTuple_New( 1 );
    const_str_digest_b0abccc6631aa6b85de08f4a664daadd = UNSTREAM_STRING( &constant_bin[ 180137 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b0abccc6631aa6b85de08f4a664daadd_tuple, 0, const_str_digest_b0abccc6631aa6b85de08f4a664daadd ); Py_INCREF( const_str_digest_b0abccc6631aa6b85de08f4a664daadd );
    const_tuple_str_digest_8c8a2a5fe21909055ee3a38044fbeaa0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8c8a2a5fe21909055ee3a38044fbeaa0_tuple, 0, const_str_digest_8c8a2a5fe21909055ee3a38044fbeaa0 ); Py_INCREF( const_str_digest_8c8a2a5fe21909055ee3a38044fbeaa0 );
    const_tuple_str_digest_4e0fd9298619640af3a4dad2f13d8f89_tuple = PyTuple_New( 1 );
    const_str_digest_4e0fd9298619640af3a4dad2f13d8f89 = UNSTREAM_STRING( &constant_bin[ 180146 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4e0fd9298619640af3a4dad2f13d8f89_tuple, 0, const_str_digest_4e0fd9298619640af3a4dad2f13d8f89 ); Py_INCREF( const_str_digest_4e0fd9298619640af3a4dad2f13d8f89 );
    const_tuple_str_digest_50321ff2fccee4024d98999f9c8d9feb_tuple = PyTuple_New( 1 );
    const_str_digest_50321ff2fccee4024d98999f9c8d9feb = UNSTREAM_STRING( &constant_bin[ 180153 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_50321ff2fccee4024d98999f9c8d9feb_tuple, 0, const_str_digest_50321ff2fccee4024d98999f9c8d9feb ); Py_INCREF( const_str_digest_50321ff2fccee4024d98999f9c8d9feb );
    const_str_digest_e1378b6a93344d0d02f5fc8acfacacd7 = UNSTREAM_STRING( &constant_bin[ 180170 ], 37, 0 );
    const_str_plain_ANY_EXTENDED_KEY_USAGE = UNSTREAM_STRING( &constant_bin[ 180207 ], 22, 1 );
    const_tuple_str_digest_42920d8d1815b6383c6613f7be148048_tuple = PyTuple_New( 1 );
    const_str_digest_42920d8d1815b6383c6613f7be148048 = UNSTREAM_STRING( &constant_bin[ 180229 ], 11, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_42920d8d1815b6383c6613f7be148048_tuple, 0, const_str_digest_42920d8d1815b6383c6613f7be148048 ); Py_INCREF( const_str_digest_42920d8d1815b6383c6613f7be148048 );
    const_str_digest_57dccc3876eef2cf5cfce321a32febb5 = UNSTREAM_STRING( &constant_bin[ 180240 ], 7, 0 );
    const_str_plain_caIssuers = UNSTREAM_STRING( &constant_bin[ 180247 ], 9, 1 );
    const_tuple_str_digest_0779a69d82c4a51e4fdc8382116baf07_tuple = PyTuple_New( 1 );
    const_str_digest_0779a69d82c4a51e4fdc8382116baf07 = UNSTREAM_STRING( &constant_bin[ 180256 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0779a69d82c4a51e4fdc8382116baf07_tuple, 0, const_str_digest_0779a69d82c4a51e4fdc8382116baf07 ); Py_INCREF( const_str_digest_0779a69d82c4a51e4fdc8382116baf07 );
    const_tuple_str_digest_9593fac7fba92df6a4af11a09356bc08_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9593fac7fba92df6a4af11a09356bc08_tuple, 0, const_str_digest_9593fac7fba92df6a4af11a09356bc08 ); Py_INCREF( const_str_digest_9593fac7fba92df6a4af11a09356bc08 );
    const_tuple_str_digest_178f043eb8a7ce81b9dfbff61f4c5f19_tuple = PyTuple_New( 1 );
    const_str_digest_178f043eb8a7ce81b9dfbff61f4c5f19 = UNSTREAM_STRING( &constant_bin[ 180265 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_178f043eb8a7ce81b9dfbff61f4c5f19_tuple, 0, const_str_digest_178f043eb8a7ce81b9dfbff61f4c5f19 ); Py_INCREF( const_str_digest_178f043eb8a7ce81b9dfbff61f4c5f19 );
    const_str_digest_1ca6abdf9952a7d39297c45ba720642a = UNSTREAM_STRING( &constant_bin[ 180274 ], 26, 0 );
    const_str_plain_emailProtection = UNSTREAM_STRING( &constant_bin[ 180300 ], 15, 1 );
    const_str_digest_d766128dd3b188cb31a47f2b60d4f03b = UNSTREAM_STRING( &constant_bin[ 26220 ], 20, 0 );
    const_str_digest_b84a8ae3bdd5ed5249d61bfca24aa504 = UNSTREAM_STRING( &constant_bin[ 26606 ], 20, 0 );
    const_tuple_str_plain_ExtensionOID_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ExtensionOID_tuple_type_object_tuple_tuple, 0, const_str_plain_ExtensionOID ); Py_INCREF( const_str_plain_ExtensionOID );
    PyTuple_SET_ITEM( const_tuple_str_plain_ExtensionOID_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_07bbedf6f84f3fc5867dc620be5e095a = UNSTREAM_STRING( &constant_bin[ 180315 ], 18, 0 );
    const_tuple_str_digest_76c946398dd022b7261d46aa6240716f_tuple = PyTuple_New( 1 );
    const_str_digest_76c946398dd022b7261d46aa6240716f = UNSTREAM_STRING( &constant_bin[ 180333 ], 8, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_76c946398dd022b7261d46aa6240716f_tuple, 0, const_str_digest_76c946398dd022b7261d46aa6240716f ); Py_INCREF( const_str_digest_76c946398dd022b7261d46aa6240716f );
    const_str_plain_localityName = UNSTREAM_STRING( &constant_bin[ 180341 ], 12, 1 );
    const_str_plain_serverAuth = UNSTREAM_STRING( &constant_bin[ 180353 ], 10, 1 );
    const_tuple_str_digest_81ded7bbfd939cddeb47d500a53437b8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_81ded7bbfd939cddeb47d500a53437b8_tuple, 0, const_str_digest_81ded7bbfd939cddeb47d500a53437b8 ); Py_INCREF( const_str_digest_81ded7bbfd939cddeb47d500a53437b8 );
    const_tuple_str_digest_f57d825cad34aac5809c155ba8a3ebb1_tuple = PyTuple_New( 1 );
    const_str_digest_f57d825cad34aac5809c155ba8a3ebb1 = UNSTREAM_STRING( &constant_bin[ 180363 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_f57d825cad34aac5809c155ba8a3ebb1_tuple, 0, const_str_digest_f57d825cad34aac5809c155ba8a3ebb1 ); Py_INCREF( const_str_digest_f57d825cad34aac5809c155ba8a3ebb1 );
    const_tuple_str_digest_b84a8ae3bdd5ed5249d61bfca24aa504_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b84a8ae3bdd5ed5249d61bfca24aa504_tuple, 0, const_str_digest_b84a8ae3bdd5ed5249d61bfca24aa504 ); Py_INCREF( const_str_digest_b84a8ae3bdd5ed5249d61bfca24aa504 );
    const_tuple_86f0dc99599489f82a87faea8a06811c_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_86f0dc99599489f82a87faea8a06811c_tuple, 0, const_str_plain_AuthorityInformationAccessOID ); Py_INCREF( const_str_plain_AuthorityInformationAccessOID );
    PyTuple_SET_ITEM( const_tuple_86f0dc99599489f82a87faea8a06811c_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_str_digest_87cdc7b3da2a01efa67fc002f5f9e93d_tuple = PyTuple_New( 1 );
    const_str_digest_87cdc7b3da2a01efa67fc002f5f9e93d = UNSTREAM_STRING( &constant_bin[ 180370 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_87cdc7b3da2a01efa67fc002f5f9e93d_tuple, 0, const_str_digest_87cdc7b3da2a01efa67fc002f5f9e93d ); Py_INCREF( const_str_digest_87cdc7b3da2a01efa67fc002f5f9e93d );
    const_tuple_str_digest_bdfb3765c1e356e48168ea62bfdbf9a4_tuple = PyTuple_New( 1 );
    const_str_digest_bdfb3765c1e356e48168ea62bfdbf9a4 = UNSTREAM_STRING( &constant_bin[ 180387 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_bdfb3765c1e356e48168ea62bfdbf9a4_tuple, 0, const_str_digest_bdfb3765c1e356e48168ea62bfdbf9a4 ); Py_INCREF( const_str_digest_bdfb3765c1e356e48168ea62bfdbf9a4 );
    const_str_plain_md5WithRSAEncryption = UNSTREAM_STRING( &constant_bin[ 180396 ], 20, 1 );
    const_tuple_str_digest_35eb25ced2ccdf6bcc44b71ddad61958_tuple = PyTuple_New( 1 );
    const_str_digest_35eb25ced2ccdf6bcc44b71ddad61958 = UNSTREAM_STRING( &constant_bin[ 26518 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_35eb25ced2ccdf6bcc44b71ddad61958_tuple, 0, const_str_digest_35eb25ced2ccdf6bcc44b71ddad61958 ); Py_INCREF( const_str_digest_35eb25ced2ccdf6bcc44b71ddad61958 );
    const_str_digest_91f2c2e6a76ab0257b7afd78a7d8444b = UNSTREAM_STRING( &constant_bin[ 180416 ], 9, 0 );
    const_str_digest_f452289eeaecab0c5424fd5ec7db97f7 = UNSTREAM_STRING( &constant_bin[ 180425 ], 9, 0 );
    const_str_plain_organizationName = UNSTREAM_STRING( &constant_bin[ 180434 ], 16, 1 );
    const_tuple_str_digest_8cf8f3c54a257961a23b52b084d86cec_tuple = PyTuple_New( 1 );
    const_str_digest_8cf8f3c54a257961a23b52b084d86cec = UNSTREAM_STRING( &constant_bin[ 26291 ], 19, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8cf8f3c54a257961a23b52b084d86cec_tuple, 0, const_str_digest_8cf8f3c54a257961a23b52b084d86cec ); Py_INCREF( const_str_digest_8cf8f3c54a257961a23b52b084d86cec );
    const_str_plain_sha224WithRSAEncryption = UNSTREAM_STRING( &constant_bin[ 180450 ], 23, 1 );
    const_str_plain_extendedKeyUsage = UNSTREAM_STRING( &constant_bin[ 180473 ], 16, 1 );
    const_str_digest_7f9fa75ff292bac6aecf30cc58bc9469 = UNSTREAM_STRING( &constant_bin[ 180489 ], 20, 0 );
    const_tuple_str_digest_d276e487e55b7f956e2f735a941b29b1_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d276e487e55b7f956e2f735a941b29b1_tuple, 0, const_str_digest_d276e487e55b7f956e2f735a941b29b1 ); Py_INCREF( const_str_digest_d276e487e55b7f956e2f735a941b29b1 );
    const_str_plain__RSA_WITH_SHA1 = UNSTREAM_STRING( &constant_bin[ 158879 ], 14, 1 );
    const_str_digest_e8435c09f6f8bb5530cfada92d890563 = UNSTREAM_STRING( &constant_bin[ 180509 ], 8, 0 );
    const_tuple_str_digest_aa35b543e4cc4067ce2da705a47d19ca_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_aa35b543e4cc4067ce2da705a47d19ca_tuple, 0, const_str_digest_aa35b543e4cc4067ce2da705a47d19ca ); Py_INCREF( const_str_digest_aa35b543e4cc4067ce2da705a47d19ca );
    const_str_digest_caddb782481a854076d3f89e9c4846e8 = UNSTREAM_STRING( &constant_bin[ 180517 ], 22, 0 );
    const_str_plain_subjectDirectoryAttributes = UNSTREAM_STRING( &constant_bin[ 180539 ], 26, 1 );
    const_tuple_str_digest_36815fa72b8e26b8a0343e58e525a6b8_tuple = PyTuple_New( 1 );
    const_str_digest_36815fa72b8e26b8a0343e58e525a6b8 = UNSTREAM_STRING( &constant_bin[ 180565 ], 17, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_36815fa72b8e26b8a0343e58e525a6b8_tuple, 0, const_str_digest_36815fa72b8e26b8a0343e58e525a6b8 ); Py_INCREF( const_str_digest_36815fa72b8e26b8a0343e58e525a6b8 );
    const_tuple_0cd458c1b602680a4d292d4a629be0a7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_0cd458c1b602680a4d292d4a629be0a7_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0cd458c1b602680a4d292d4a629be0a7_tuple, 1, const_str_plain_dotted_string ); Py_INCREF( const_str_plain_dotted_string );
    const_str_plain_intnodes = UNSTREAM_STRING( &constant_bin[ 180582 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_0cd458c1b602680a4d292d4a629be0a7_tuple, 2, const_str_plain_intnodes ); Py_INCREF( const_str_plain_intnodes );
    PyTuple_SET_ITEM( const_tuple_0cd458c1b602680a4d292d4a629be0a7_tuple, 3, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_0cd458c1b602680a4d292d4a629be0a7_tuple, 4, const_str_plain_nodes ); Py_INCREF( const_str_plain_nodes );
    const_str_digest_48bb56d35289ac7c69544408e253d64a = UNSTREAM_STRING( &constant_bin[ 180590 ], 9, 0 );
    const_tuple_str_digest_ced7dfea6e2ba0f172c63b367fc544eb_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_ced7dfea6e2ba0f172c63b367fc544eb_tuple, 0, const_str_digest_ced7dfea6e2ba0f172c63b367fc544eb ); Py_INCREF( const_str_digest_ced7dfea6e2ba0f172c63b367fc544eb );
    const_str_plain_keyUsage = UNSTREAM_STRING( &constant_bin[ 180599 ], 8, 1 );
    const_str_digest_852fec09bfab0354c97da9bfbb5b0b45 = UNSTREAM_STRING( &constant_bin[ 180607 ], 48, 0 );
    const_str_plain_subjectAltName = UNSTREAM_STRING( &constant_bin[ 180655 ], 14, 1 );
    const_str_plain_X500_UNIQUE_IDENTIFIER = UNSTREAM_STRING( &constant_bin[ 180669 ], 22, 1 );
    const_str_digest_e69bc10a8fca5202a28e2cd518549779 = UNSTREAM_STRING( &constant_bin[ 180691 ], 7, 0 );
    const_str_plain_authorityInfoAccess = UNSTREAM_STRING( &constant_bin[ 180698 ], 19, 1 );
    const_str_plain_POSTAL_ADDRESS = UNSTREAM_STRING( &constant_bin[ 180717 ], 14, 1 );
    const_tuple_str_digest_07bbedf6f84f3fc5867dc620be5e095a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_07bbedf6f84f3fc5867dc620be5e095a_tuple, 0, const_str_digest_07bbedf6f84f3fc5867dc620be5e095a ); Py_INCREF( const_str_digest_07bbedf6f84f3fc5867dc620be5e095a );
    const_str_plain_USER_ID = UNSTREAM_STRING( &constant_bin[ 180731 ], 7, 1 );
    const_tuple_str_digest_c0c0b06f4a096cb9cc1becef6ebea806_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c0c0b06f4a096cb9cc1becef6ebea806_tuple, 0, const_str_digest_c0c0b06f4a096cb9cc1becef6ebea806 ); Py_INCREF( const_str_digest_c0c0b06f4a096cb9cc1becef6ebea806 );
    const_tuple_str_digest_cbb358e95676acbda1a7cec77811a76a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_cbb358e95676acbda1a7cec77811a76a_tuple, 0, const_str_digest_cbb358e95676acbda1a7cec77811a76a ); Py_INCREF( const_str_digest_cbb358e95676acbda1a7cec77811a76a );
    const_str_digest_2998224fa424af08b3f684a1be17945c = UNSTREAM_STRING( &constant_bin[ 180738 ], 8, 0 );
    const_str_digest_9f975f715f271ffc97cba117d4ed2c89 = UNSTREAM_STRING( &constant_bin[ 180746 ], 23, 0 );
    const_str_digest_402231cec73b599b9bdec4daf7775016 = UNSTREAM_STRING( &constant_bin[ 180769 ], 9, 0 );
    const_tuple_str_digest_48bb56d35289ac7c69544408e253d64a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_48bb56d35289ac7c69544408e253d64a_tuple, 0, const_str_digest_48bb56d35289ac7c69544408e253d64a ); Py_INCREF( const_str_digest_48bb56d35289ac7c69544408e253d64a );
    const_str_plain_domainComponent = UNSTREAM_STRING( &constant_bin[ 180778 ], 15, 1 );
    const_str_digest_03e57fcfeaffac79e0551f43c9be177f = UNSTREAM_STRING( &constant_bin[ 180793 ], 17, 0 );
    const_str_digest_b9034be89ceffc7e47a52abddeb5f6bd = UNSTREAM_STRING( &constant_bin[ 180810 ], 25, 0 );
    const_tuple_str_digest_c721cd011be8e0f6c97e5d0f5ec94d60_tuple = PyTuple_New( 1 );
    const_str_digest_c721cd011be8e0f6c97e5d0f5ec94d60 = UNSTREAM_STRING( &constant_bin[ 180835 ], 18, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c721cd011be8e0f6c97e5d0f5ec94d60_tuple, 0, const_str_digest_c721cd011be8e0f6c97e5d0f5ec94d60 ); Py_INCREF( const_str_digest_c721cd011be8e0f6c97e5d0f5ec94d60 );
    const_tuple_str_digest_aa13593fc87e4f4e4b2b52fd048b3e8a_tuple = PyTuple_New( 1 );
    const_str_digest_aa13593fc87e4f4e4b2b52fd048b3e8a = UNSTREAM_STRING( &constant_bin[ 179564 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_aa13593fc87e4f4e4b2b52fd048b3e8a_tuple, 0, const_str_digest_aa13593fc87e4f4e4b2b52fd048b3e8a ); Py_INCREF( const_str_digest_aa13593fc87e4f4e4b2b52fd048b3e8a );
    const_str_plain_cRLReason = UNSTREAM_STRING( &constant_bin[ 180853 ], 9, 1 );
    const_str_digest_c65f30c441db755c29a6af4980e8b725 = UNSTREAM_STRING( &constant_bin[ 26677 ], 19, 0 );
    const_str_plain_postalCode = UNSTREAM_STRING( &constant_bin[ 180862 ], 10, 1 );
    const_str_digest_ad3c682658ab1bc2f4342a30cc4996e2 = UNSTREAM_STRING( &constant_bin[ 180872 ], 17, 0 );
    const_str_plain_freshestCRL = UNSTREAM_STRING( &constant_bin[ 180889 ], 11, 1 );
    const_str_plain_policyConstraints = UNSTREAM_STRING( &constant_bin[ 180900 ], 17, 1 );
    const_str_digest_4d6b2240da355b093304532a38b9315b = UNSTREAM_STRING( &constant_bin[ 180917 ], 23, 0 );
    const_str_plain_sha1WithRSAEncryption = UNSTREAM_STRING( &constant_bin[ 180940 ], 21, 1 );
    const_tuple_str_digest_649afc4ad6dae06148c7e2d99bb38960_tuple = PyTuple_New( 1 );
    const_str_digest_649afc4ad6dae06148c7e2d99bb38960 = UNSTREAM_STRING( &constant_bin[ 26324 ], 22, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_649afc4ad6dae06148c7e2d99bb38960_tuple, 0, const_str_digest_649afc4ad6dae06148c7e2d99bb38960 ); Py_INCREF( const_str_digest_649afc4ad6dae06148c7e2d99bb38960 );
    const_str_plain_OCSPSigning = UNSTREAM_STRING( &constant_bin[ 180961 ], 11, 1 );
    const_tuple_str_digest_03e57fcfeaffac79e0551f43c9be177f_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_03e57fcfeaffac79e0551f43c9be177f_tuple, 0, const_str_digest_03e57fcfeaffac79e0551f43c9be177f ); Py_INCREF( const_str_digest_03e57fcfeaffac79e0551f43c9be177f );
    const_tuple_str_digest_d2f818cdf8c42e2d6390ddd53b016587_tuple = PyTuple_New( 1 );
    const_str_digest_d2f818cdf8c42e2d6390ddd53b016587 = UNSTREAM_STRING( &constant_bin[ 180972 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d2f818cdf8c42e2d6390ddd53b016587_tuple, 0, const_str_digest_d2f818cdf8c42e2d6390ddd53b016587 ); Py_INCREF( const_str_digest_d2f818cdf8c42e2d6390ddd53b016587 );
    const_str_plain_timeStamping = UNSTREAM_STRING( &constant_bin[ 180981 ], 12, 1 );
    const_tuple_str_digest_a690942c66e69d63578daefd13197ae2_tuple = PyTuple_New( 1 );
    const_str_digest_a690942c66e69d63578daefd13197ae2 = UNSTREAM_STRING( &constant_bin[ 180229 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a690942c66e69d63578daefd13197ae2_tuple, 0, const_str_digest_a690942c66e69d63578daefd13197ae2 ); Py_INCREF( const_str_digest_a690942c66e69d63578daefd13197ae2 );
    const_tuple_str_plain__dotted_string_tuple = PyTuple_New( 1 );
    const_str_plain__dotted_string = UNSTREAM_STRING( &constant_bin[ 180993 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__dotted_string_tuple, 0, const_str_plain__dotted_string ); Py_INCREF( const_str_plain__dotted_string );
    const_tuple_str_plain_CertificatePoliciesOID_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CertificatePoliciesOID_tuple_type_object_tuple_tuple, 0, const_str_plain_CertificatePoliciesOID ); Py_INCREF( const_str_plain_CertificatePoliciesOID );
    PyTuple_SET_ITEM( const_tuple_str_plain_CertificatePoliciesOID_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_str_plain_CRLEntryExtensionOID_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CRLEntryExtensionOID_tuple_type_object_tuple_tuple, 0, const_str_plain_CRLEntryExtensionOID ); Py_INCREF( const_str_plain_CRLEntryExtensionOID );
    PyTuple_SET_ITEM( const_tuple_str_plain_CRLEntryExtensionOID_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_plain_businessCategory = UNSTREAM_STRING( &constant_bin[ 181007 ], 16, 1 );
    const_tuple_str_plain_SignatureAlgorithmOID_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SignatureAlgorithmOID_tuple_type_object_tuple_tuple, 0, const_str_plain_SignatureAlgorithmOID ); Py_INCREF( const_str_plain_SignatureAlgorithmOID );
    PyTuple_SET_ITEM( const_tuple_str_plain_SignatureAlgorithmOID_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_plain_POSTAL_CODE = UNSTREAM_STRING( &constant_bin[ 181023 ], 11, 1 );
    const_tuple_str_digest_2b4acfbf018aa94fa2c4d751377b67ba_tuple = PyTuple_New( 1 );
    const_str_digest_2b4acfbf018aa94fa2c4d751377b67ba = UNSTREAM_STRING( &constant_bin[ 181034 ], 18, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_2b4acfbf018aa94fa2c4d751377b67ba_tuple, 0, const_str_digest_2b4acfbf018aa94fa2c4d751377b67ba ); Py_INCREF( const_str_digest_2b4acfbf018aa94fa2c4d751377b67ba );
    const_str_plain_streetAddress = UNSTREAM_STRING( &constant_bin[ 181052 ], 13, 1 );
    const_str_plain_codeSigning = UNSTREAM_STRING( &constant_bin[ 181065 ], 11, 1 );
    const_tuple_str_digest_2998224fa424af08b3f684a1be17945c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_2998224fa424af08b3f684a1be17945c_tuple, 0, const_str_digest_2998224fa424af08b3f684a1be17945c ); Py_INCREF( const_str_digest_2998224fa424af08b3f684a1be17945c );
    const_tuple_str_digest_592f2dc8660724fc191cd3b965719e17_tuple = PyTuple_New( 1 );
    const_str_digest_592f2dc8660724fc191cd3b965719e17 = UNSTREAM_STRING( &constant_bin[ 27877 ], 13, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_592f2dc8660724fc191cd3b965719e17_tuple, 0, const_str_digest_592f2dc8660724fc191cd3b965719e17 ); Py_INCREF( const_str_digest_592f2dc8660724fc191cd3b965719e17 );
    const_str_digest_3df3ca64dd8761c027ed0ba43961e89a = UNSTREAM_STRING( &constant_bin[ 181076 ], 15, 0 );
    const_tuple_str_digest_d987020246f2d9f737862dd92bc63eef_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d987020246f2d9f737862dd92bc63eef_tuple, 0, const_str_digest_d987020246f2d9f737862dd92bc63eef ); Py_INCREF( const_str_digest_d987020246f2d9f737862dd92bc63eef );
    const_str_digest_c0030236ac728e19ca4e60cb208261c6 = UNSTREAM_STRING( &constant_bin[ 181091 ], 24, 0 );
    const_tuple_str_digest_0289302dc46017fd66759aa38355e887_tuple = PyTuple_New( 1 );
    const_str_digest_0289302dc46017fd66759aa38355e887 = UNSTREAM_STRING( &constant_bin[ 181115 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0289302dc46017fd66759aa38355e887_tuple, 0, const_str_digest_0289302dc46017fd66759aa38355e887 ); Py_INCREF( const_str_digest_0289302dc46017fd66759aa38355e887 );
    const_str_plain_serialNumber = UNSTREAM_STRING( &constant_bin[ 114865 ], 12, 1 );
    const_str_digest_d03446569431a2d7e5a8eb6f1a6c779c = UNSTREAM_STRING( &constant_bin[ 181124 ], 25, 0 );
    const_str_plain_BUSINESS_CATEGORY = UNSTREAM_STRING( &constant_bin[ 181149 ], 17, 1 );
    const_str_plain_userID = UNSTREAM_STRING( &constant_bin[ 181166 ], 6, 1 );
    const_str_digest_65069b4fb9aa28cf3d80a60f2197040c = UNSTREAM_STRING( &constant_bin[ 26393 ], 17, 0 );
    const_str_plain_sha384WithRSAEncryption = UNSTREAM_STRING( &constant_bin[ 181172 ], 23, 1 );
    const_tuple_str_digest_7f9fa75ff292bac6aecf30cc58bc9469_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7f9fa75ff292bac6aecf30cc58bc9469_tuple, 0, const_str_digest_7f9fa75ff292bac6aecf30cc58bc9469 ); Py_INCREF( const_str_digest_7f9fa75ff292bac6aecf30cc58bc9469 );
    const_str_plain_jurisdictionStateOrProvinceName = UNSTREAM_STRING( &constant_bin[ 181195 ], 31, 1 );
    const_str_digest_32f8ab72218c1518444529b9839bc60e = UNSTREAM_STRING( &constant_bin[ 181226 ], 9, 0 );
    const_str_digest_540fbcea024364d9d18527e75b78cb8a = UNSTREAM_STRING( &constant_bin[ 181235 ], 51, 0 );
    const_tuple_str_digest_d766128dd3b188cb31a47f2b60d4f03b_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d766128dd3b188cb31a47f2b60d4f03b_tuple, 0, const_str_digest_d766128dd3b188cb31a47f2b60d4f03b ); Py_INCREF( const_str_digest_d766128dd3b188cb31a47f2b60d4f03b );
    const_tuple_str_digest_e69bc10a8fca5202a28e2cd518549779_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e69bc10a8fca5202a28e2cd518549779_tuple, 0, const_str_digest_e69bc10a8fca5202a28e2cd518549779 ); Py_INCREF( const_str_digest_e69bc10a8fca5202a28e2cd518549779 );
    const_str_plain_sha256WithRSAEncryption = UNSTREAM_STRING( &constant_bin[ 181286 ], 23, 1 );
    const_str_plain_surname = UNSTREAM_STRING( &constant_bin[ 181309 ], 7, 1 );
    const_str_digest_1135dc3548cae245667224b61d063e8f = UNSTREAM_STRING( &constant_bin[ 181316 ], 20, 0 );
    const_tuple_str_digest_777dc680c1db5aad08fab2430d7c4782_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_777dc680c1db5aad08fab2430d7c4782_tuple, 0, const_str_digest_777dc680c1db5aad08fab2430d7c4782 ); Py_INCREF( const_str_digest_777dc680c1db5aad08fab2430d7c4782 );
    const_tuple_str_digest_57dccc3876eef2cf5cfce321a32febb5_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_57dccc3876eef2cf5cfce321a32febb5_tuple, 0, const_str_digest_57dccc3876eef2cf5cfce321a32febb5 ); Py_INCREF( const_str_digest_57dccc3876eef2cf5cfce321a32febb5 );
    const_str_digest_a0b774c3e9788e9c20a69f9b798eb899 = UNSTREAM_STRING( &constant_bin[ 181336 ], 15, 0 );
    const_tuple_str_digest_4d1eecda490e15d970f849aecc70bec4_tuple = PyTuple_New( 1 );
    const_str_digest_4d1eecda490e15d970f849aecc70bec4 = UNSTREAM_STRING( &constant_bin[ 181351 ], 8, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_4d1eecda490e15d970f849aecc70bec4_tuple, 0, const_str_digest_4d1eecda490e15d970f849aecc70bec4 ); Py_INCREF( const_str_digest_4d1eecda490e15d970f849aecc70bec4 );
    const_str_plain_JURISDICTION_STATE_OR_PROVINCE_NAME = UNSTREAM_STRING( &constant_bin[ 181359 ], 35, 1 );
    const_tuple_str_digest_c65f30c441db755c29a6af4980e8b725_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_c65f30c441db755c29a6af4980e8b725_tuple, 0, const_str_digest_c65f30c441db755c29a6af4980e8b725 ); Py_INCREF( const_str_digest_c65f30c441db755c29a6af4980e8b725 );
    const_tuple_str_digest_2958a1ef6593e1758ab759e3a2c573e0_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_2958a1ef6593e1758ab759e3a2c573e0_tuple, 0, const_str_digest_2958a1ef6593e1758ab759e3a2c573e0 ); Py_INCREF( const_str_digest_2958a1ef6593e1758ab759e3a2c573e0 );
    const_str_plain_jurisdictionLocalityName = UNSTREAM_STRING( &constant_bin[ 181394 ], 24, 1 );
    const_str_plain_jurisdictionCountryName = UNSTREAM_STRING( &constant_bin[ 181418 ], 23, 1 );
    const_tuple_str_digest_91f2c2e6a76ab0257b7afd78a7d8444b_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_91f2c2e6a76ab0257b7afd78a7d8444b_tuple, 0, const_str_digest_91f2c2e6a76ab0257b7afd78a7d8444b ); Py_INCREF( const_str_digest_91f2c2e6a76ab0257b7afd78a7d8444b );
    const_str_digest_7bf3755c297bacd02e1889e435f6a646 = UNSTREAM_STRING( &constant_bin[ 181441 ], 30, 0 );
    const_str_plain_inhibitAnyPolicy = UNSTREAM_STRING( &constant_bin[ 181471 ], 16, 1 );
    const_tuple_str_digest_2bb014389d4aa5909b80bc2e19c3df8a_tuple = PyTuple_New( 1 );
    const_str_digest_2bb014389d4aa5909b80bc2e19c3df8a = UNSTREAM_STRING( &constant_bin[ 181487 ], 18, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_2bb014389d4aa5909b80bc2e19c3df8a_tuple, 0, const_str_digest_2bb014389d4aa5909b80bc2e19c3df8a ); Py_INCREF( const_str_digest_2bb014389d4aa5909b80bc2e19c3df8a );
    const_tuple_str_digest_1135dc3548cae245667224b61d063e8f_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_1135dc3548cae245667224b61d063e8f_tuple, 0, const_str_digest_1135dc3548cae245667224b61d063e8f ); Py_INCREF( const_str_digest_1135dc3548cae245667224b61d063e8f );
    const_tuple_str_digest_e8435c09f6f8bb5530cfada92d890563_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e8435c09f6f8bb5530cfada92d890563_tuple, 0, const_str_digest_e8435c09f6f8bb5530cfada92d890563 ); Py_INCREF( const_str_digest_e8435c09f6f8bb5530cfada92d890563 );
    const_tuple_str_digest_65069b4fb9aa28cf3d80a60f2197040c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_65069b4fb9aa28cf3d80a60f2197040c_tuple, 0, const_str_digest_65069b4fb9aa28cf3d80a60f2197040c ); Py_INCREF( const_str_digest_65069b4fb9aa28cf3d80a60f2197040c );
    const_tuple_str_digest_fbb6e1cc86dd0b99c46a7f9000416d62_tuple = PyTuple_New( 1 );
    const_str_digest_fbb6e1cc86dd0b99c46a7f9000416d62 = UNSTREAM_STRING( &constant_bin[ 181505 ], 11, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_fbb6e1cc86dd0b99c46a7f9000416d62_tuple, 0, const_str_digest_fbb6e1cc86dd0b99c46a7f9000416d62 ); Py_INCREF( const_str_digest_fbb6e1cc86dd0b99c46a7f9000416d62 );
    const_str_digest_f0466168cc522d6329cd664ce084d453 = UNSTREAM_STRING( &constant_bin[ 181516 ], 25, 0 );
    const_str_plain_dnQualifier = UNSTREAM_STRING( &constant_bin[ 181541 ], 11, 1 );
    const_str_plain_subjectKeyIdentifier = UNSTREAM_STRING( &constant_bin[ 181552 ], 20, 1 );
    const_str_plain_certificateIssuer = UNSTREAM_STRING( &constant_bin[ 181572 ], 17, 1 );
    const_str_digest_ff3f390793cb3f7a65e3ba0d8b30034e = UNSTREAM_STRING( &constant_bin[ 181589 ], 17, 0 );
    const_str_digest_017b3818c501a0f2bbf7f46bc35fb8d6 = UNSTREAM_STRING( &constant_bin[ 181606 ], 9, 0 );
    const_str_digest_557b29feaadb5ada1ad965906e5d1dd3 = UNSTREAM_STRING( &constant_bin[ 181615 ], 17, 0 );
    const_tuple_str_digest_1ca6abdf9952a7d39297c45ba720642a_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_1ca6abdf9952a7d39297c45ba720642a_tuple, 0, const_str_digest_1ca6abdf9952a7d39297c45ba720642a ); Py_INCREF( const_str_digest_1ca6abdf9952a7d39297c45ba720642a );
    const_str_digest_e00b2e9d0b3aff0d7f1215741c8caf4c = UNSTREAM_STRING( &constant_bin[ 181632 ], 8, 0 );
    const_tuple_str_digest_017b3818c501a0f2bbf7f46bc35fb8d6_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_017b3818c501a0f2bbf7f46bc35fb8d6_tuple, 0, const_str_digest_017b3818c501a0f2bbf7f46bc35fb8d6 ); Py_INCREF( const_str_digest_017b3818c501a0f2bbf7f46bc35fb8d6 );
    const_tuple_str_digest_8004dc93b6b3bd5578dfd84dda8defdc_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8004dc93b6b3bd5578dfd84dda8defdc_tuple, 0, const_str_digest_8004dc93b6b3bd5578dfd84dda8defdc ); Py_INCREF( const_str_digest_8004dc93b6b3bd5578dfd84dda8defdc );
    const_str_plain_invalidityDate = UNSTREAM_STRING( &constant_bin[ 181640 ], 14, 1 );
    const_str_plain_subjectInfoAccess = UNSTREAM_STRING( &constant_bin[ 181654 ], 17, 1 );
    const_str_plain_deltaCRLIndicator = UNSTREAM_STRING( &constant_bin[ 181671 ], 17, 1 );
    const_tuple_str_digest_9f975f715f271ffc97cba117d4ed2c89_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9f975f715f271ffc97cba117d4ed2c89_tuple, 0, const_str_digest_9f975f715f271ffc97cba117d4ed2c89 ); Py_INCREF( const_str_digest_9f975f715f271ffc97cba117d4ed2c89 );
    const_str_digest_7e1cd35ea5517b9b5d7382f57546e80b = UNSTREAM_STRING( &constant_bin[ 181688 ], 23, 0 );
    const_str_plain_pseudonym = UNSTREAM_STRING( &constant_bin[ 181711 ], 9, 1 );
    const_tuple_str_digest_e00b2e9d0b3aff0d7f1215741c8caf4c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_e00b2e9d0b3aff0d7f1215741c8caf4c_tuple, 0, const_str_digest_e00b2e9d0b3aff0d7f1215741c8caf4c ); Py_INCREF( const_str_digest_e00b2e9d0b3aff0d7f1215741c8caf4c );
    const_str_digest_17ca6fd46f3d026f6114676b663f8acd = UNSTREAM_STRING( &constant_bin[ 181720 ], 13, 0 );
    const_tuple_str_digest_767d9ff9e747b20f9b2a62cdf04da0de_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_767d9ff9e747b20f9b2a62cdf04da0de_tuple, 0, const_str_digest_767d9ff9e747b20f9b2a62cdf04da0de ); Py_INCREF( const_str_digest_767d9ff9e747b20f9b2a62cdf04da0de );
    const_tuple_str_digest_32f8ab72218c1518444529b9839bc60e_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_32f8ab72218c1518444529b9839bc60e_tuple, 0, const_str_digest_32f8ab72218c1518444529b9839bc60e ); Py_INCREF( const_str_digest_32f8ab72218c1518444529b9839bc60e );
    const_str_plain_stateOrProvinceName = UNSTREAM_STRING( &constant_bin[ 181733 ], 19, 1 );
    const_str_plain_authorityKeyIdentifier = UNSTREAM_STRING( &constant_bin[ 181752 ], 22, 1 );
    const_tuple_str_digest_175c6aa0dbff49caa0d29fca6c1fdbb2_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_175c6aa0dbff49caa0d29fca6c1fdbb2_tuple, 0, const_str_digest_175c6aa0dbff49caa0d29fca6c1fdbb2 ); Py_INCREF( const_str_digest_175c6aa0dbff49caa0d29fca6c1fdbb2 );
    const_str_digest_71c6ff0a892bea1ac9692e0ad204c0d0 = UNSTREAM_STRING( &constant_bin[ 181774 ], 37, 0 );
    const_tuple_str_digest_402231cec73b599b9bdec4daf7775016_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_402231cec73b599b9bdec4daf7775016_tuple, 0, const_str_digest_402231cec73b599b9bdec4daf7775016 ); Py_INCREF( const_str_digest_402231cec73b599b9bdec4daf7775016 );
    const_tuple_str_plain_ExtendedKeyUsageOID_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ExtendedKeyUsageOID_tuple_type_object_tuple_tuple, 0, const_str_plain_ExtendedKeyUsageOID ); Py_INCREF( const_str_plain_ExtendedKeyUsageOID );
    PyTuple_SET_ITEM( const_tuple_str_plain_ExtendedKeyUsageOID_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_str_digest_0f59f576526d1d0c3e712a7f737c95cb_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0f59f576526d1d0c3e712a7f737c95cb_tuple, 0, const_str_digest_0f59f576526d1d0c3e712a7f737c95cb ); Py_INCREF( const_str_digest_0f59f576526d1d0c3e712a7f737c95cb );
    const_str_digest_10a263591d80ff02d463da6ebd05548d = UNSTREAM_STRING( &constant_bin[ 181811 ], 10, 0 );
    const_str_plain_x500UniqueIdentifier = UNSTREAM_STRING( &constant_bin[ 181821 ], 20, 1 );
    const_str_plain_generationQualifier = UNSTREAM_STRING( &constant_bin[ 181841 ], 19, 1 );
    const_str_plain_basicConstraints = UNSTREAM_STRING( &constant_bin[ 181860 ], 16, 1 );
    const_tuple_str_digest_6cf4c807f183a057576c391d9f7c4e24_tuple = PyTuple_New( 1 );
    const_str_digest_6cf4c807f183a057576c391d9f7c4e24 = UNSTREAM_STRING( &constant_bin[ 181876 ], 7, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_6cf4c807f183a057576c391d9f7c4e24_tuple, 0, const_str_digest_6cf4c807f183a057576c391d9f7c4e24 ); Py_INCREF( const_str_digest_6cf4c807f183a057576c391d9f7c4e24 );
    const_str_digest_37e39c7d44ed2301659b6cf91e2dbebe = UNSTREAM_STRING( &constant_bin[ 181883 ], 50, 0 );
    const_str_digest_8c168ca0bdafd4e71f4b6bf87eb46ded = UNSTREAM_STRING( &constant_bin[ 181933 ], 17, 0 );
    const_str_plain_givenName = UNSTREAM_STRING( &constant_bin[ 181950 ], 9, 1 );
    const_tuple_str_plain_NameOID_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NameOID_tuple_type_object_tuple_tuple, 0, const_str_plain_NameOID ); Py_INCREF( const_str_plain_NameOID );
    PyTuple_SET_ITEM( const_tuple_str_plain_NameOID_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_plain_emailAddress = UNSTREAM_STRING( &constant_bin[ 181959 ], 12, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$x509$oid( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_bb39115ecdd75e08807811d1ec7276f7;
static PyCodeObject *codeobj_10d02b76d4df16df19cd3d03c2c6911f;
static PyCodeObject *codeobj_19374a4cbe0cb45c8ef4b3687f4d1626;
static PyCodeObject *codeobj_8706214e66a720fa12d0dc004ada394c;
static PyCodeObject *codeobj_53a93e878c9d6c7662b31882a9b0d478;
static PyCodeObject *codeobj_d36b8067ff970292af9d1b5ef15fb8d7;
static PyCodeObject *codeobj_680032cf9fc9839bb6e41a76a46d2da9;
static PyCodeObject *codeobj_b59ce8e335d87639c9aa02d83b5a9f62;
static PyCodeObject *codeobj_74db009ebb9527a7b95381a5bc0c8fe9;
static PyCodeObject *codeobj_22d24b99aca1f4486ed993b35e01e6bf;
static PyCodeObject *codeobj_044e1785ee9f3c88a4a2e0fe2151a8a0;
static PyCodeObject *codeobj_eacdc9ea13d948d90918f9472ff63c62;
static PyCodeObject *codeobj_2cbabca9cd68e83f6ec950bc1e68d848;
static PyCodeObject *codeobj_2ed941db4bc0f53df6af0692c49d452f;
static PyCodeObject *codeobj_38a08d196328375330bcb5920055f51f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_c0030236ac728e19ca4e60cb208261c6 );
    codeobj_bb39115ecdd75e08807811d1ec7276f7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_7bf3755c297bacd02e1889e435f6a646, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_10d02b76d4df16df19cd3d03c2c6911f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_AuthorityInformationAccessOID, 180, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_19374a4cbe0cb45c8ef4b3687f4d1626 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CRLEntryExtensionOID, 96, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_8706214e66a720fa12d0dc004ada394c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CertificatePoliciesOID, 185, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_53a93e878c9d6c7662b31882a9b0d478 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ExtendedKeyUsageOID, 170, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d36b8067ff970292af9d1b5ef15fb8d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ExtensionOID, 69, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_680032cf9fc9839bb6e41a76a46d2da9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_NameOID, 102, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_b59ce8e335d87639c9aa02d83b5a9f62 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ObjectIdentifier, 11, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_74db009ebb9527a7b95381a5bc0c8fe9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SignatureAlgorithmOID, 131, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_22d24b99aca1f4486ed993b35e01e6bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 44, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_044e1785ee9f3c88a4a2e0fe2151a8a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___hash__, 59, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eacdc9ea13d948d90918f9472ff63c62 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 12, const_tuple_0cd458c1b602680a4d292d4a629be0a7_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2cbabca9cd68e83f6ec950bc1e68d848 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 50, const_tuple_str_plain_self_str_plain_other_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2ed941db4bc0f53df6af0692c49d452f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 53, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_38a08d196328375330bcb5920055f51f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__name, 62, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_2___eq__(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_3___ne__(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_4___repr__(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_5___hash__(  );


static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_6__name(  );


// The module function definitions.
static PyObject *impl_cryptography$x509$oid$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dotted_string = python_pars[ 1 ];
    PyObject *var_intnodes = NULL;
    PyObject *var_node = NULL;
    PyObject *var_nodes = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_base_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_eacdc9ea13d948d90918f9472ff63c62 = NULL;

    struct Nuitka_FrameObject *frame_eacdc9ea13d948d90918f9472ff63c62;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eacdc9ea13d948d90918f9472ff63c62, codeobj_eacdc9ea13d948d90918f9472ff63c62, module_cryptography$x509$oid, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eacdc9ea13d948d90918f9472ff63c62 = cache_frame_eacdc9ea13d948d90918f9472ff63c62;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eacdc9ea13d948d90918f9472ff63c62 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eacdc9ea13d948d90918f9472ff63c62 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_dotted_string;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__dotted_string, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dotted_string );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_eacdc9ea13d948d90918f9472ff63c62->m_frame.f_lineno = 15;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_nodes == NULL );
    var_nodes = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_intnodes == NULL );
    var_intnodes = tmp_assign_source_2;

    tmp_iter_arg_1 = var_nodes;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooo";
        exception_lineno = 21;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 21;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_node;
        var_node = tmp_assign_source_5;
        Py_INCREF( var_node );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_2 = var_intnodes;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "intnodes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    tmp_value_name_2 = var_node;

    if ( tmp_value_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    tmp_base_name_1 = const_int_0;
    tmp_args_element_name_1 = TO_INT2( tmp_value_name_2, tmp_base_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 23;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    frame_eacdc9ea13d948d90918f9472ff63c62->m_frame.f_lineno = 23;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_eacdc9ea13d948d90918f9472ff63c62, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_eacdc9ea13d948d90918f9472ff63c62, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PyException_SetTraceback( exception_keeper_value_2, (PyObject *)exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    // Tried code:
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_2 = PyExc_ValueError;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_1 = const_str_digest_71c6ff0a892bea1ac9692e0ad204c0d0;
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 27;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__dotted_string );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    frame_eacdc9ea13d948d90918f9472ff63c62->m_frame.f_lineno = 25;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 25;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 22;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_eacdc9ea13d948d90918f9472ff63c62->m_frame) frame_eacdc9ea13d948d90918f9472ff63c62->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_5;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_1___init__ );
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_len_arg_1 = var_nodes;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "nodes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_2 = const_str_digest_852fec09bfab0354c97da9bfbb5b0b45;
    tmp_source_name_4 = par_self;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__dotted_string );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_eacdc9ea13d948d90918f9472ff63c62->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 30;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_subscribed_name_1 = var_intnodes;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "intnodes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_pos_2;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_3 = const_str_digest_37e39c7d44ed2301659b6cf91e2dbebe;
    tmp_source_name_5 = par_self;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__dotted_string );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_make_exception_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_eacdc9ea13d948d90918f9472ff63c62->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_3 );
    assert( !(tmp_raise_type_3 == NULL) );
    exception_type = tmp_raise_type_3;
    exception_lineno = 35;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_subscribed_name_2 = var_intnodes;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "intnodes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_and_left_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 39;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_subscribed_name_3 = var_intnodes;

    if ( tmp_subscribed_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "intnodes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_3 = const_int_pos_1;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_40;
    tmp_and_right_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 39;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_left_name_4 = const_str_digest_540fbcea024364d9d18527e75b78cb8a;
    tmp_source_name_6 = par_self;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__dotted_string );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_make_exception_arg_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_make_exception_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    frame_eacdc9ea13d948d90918f9472ff63c62->m_frame.f_lineno = 40;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_4 );
    assert( !(tmp_raise_type_4 == NULL) );
    exception_type = tmp_raise_type_4;
    exception_lineno = 40;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooo";
    goto frame_exception_exit_1;
    branch_no_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eacdc9ea13d948d90918f9472ff63c62 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eacdc9ea13d948d90918f9472ff63c62 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eacdc9ea13d948d90918f9472ff63c62, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eacdc9ea13d948d90918f9472ff63c62->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eacdc9ea13d948d90918f9472ff63c62, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eacdc9ea13d948d90918f9472ff63c62,
        type_description_1,
        par_self,
        par_dotted_string,
        var_intnodes,
        var_node,
        var_nodes
    );


    // Release cached frame.
    if ( frame_eacdc9ea13d948d90918f9472ff63c62 == cache_frame_eacdc9ea13d948d90918f9472ff63c62 )
    {
        Py_DECREF( frame_eacdc9ea13d948d90918f9472ff63c62 );
    }
    cache_frame_eacdc9ea13d948d90918f9472ff63c62 = NULL;

    assertFrameObject( frame_eacdc9ea13d948d90918f9472ff63c62 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_intnodes );
    var_intnodes = NULL;

    Py_XDECREF( var_node );
    var_node = NULL;

    Py_XDECREF( var_nodes );
    var_nodes = NULL;

    Py_XDECREF( par_dotted_string );
    par_dotted_string = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_intnodes );
    var_intnodes = NULL;

    Py_XDECREF( var_node );
    var_node = NULL;

    Py_XDECREF( var_nodes );
    var_nodes = NULL;

    Py_XDECREF( par_dotted_string );
    par_dotted_string = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_1___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$oid$$$function_2___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_22d24b99aca1f4486ed993b35e01e6bf = NULL;

    struct Nuitka_FrameObject *frame_22d24b99aca1f4486ed993b35e01e6bf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_22d24b99aca1f4486ed993b35e01e6bf, codeobj_22d24b99aca1f4486ed993b35e01e6bf, module_cryptography$x509$oid, sizeof(void *)+sizeof(void *) );
    frame_22d24b99aca1f4486ed993b35e01e6bf = cache_frame_22d24b99aca1f4486ed993b35e01e6bf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_22d24b99aca1f4486ed993b35e01e6bf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_22d24b99aca1f4486ed993b35e01e6bf ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_other;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dotted_string );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dotted_string );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22d24b99aca1f4486ed993b35e01e6bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_22d24b99aca1f4486ed993b35e01e6bf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_22d24b99aca1f4486ed993b35e01e6bf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_22d24b99aca1f4486ed993b35e01e6bf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_22d24b99aca1f4486ed993b35e01e6bf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_22d24b99aca1f4486ed993b35e01e6bf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_22d24b99aca1f4486ed993b35e01e6bf,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_22d24b99aca1f4486ed993b35e01e6bf == cache_frame_22d24b99aca1f4486ed993b35e01e6bf )
    {
        Py_DECREF( frame_22d24b99aca1f4486ed993b35e01e6bf );
    }
    cache_frame_22d24b99aca1f4486ed993b35e01e6bf = NULL;

    assertFrameObject( frame_22d24b99aca1f4486ed993b35e01e6bf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_2___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_2___eq__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$oid$$$function_3___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2cbabca9cd68e83f6ec950bc1e68d848 = NULL;

    struct Nuitka_FrameObject *frame_2cbabca9cd68e83f6ec950bc1e68d848;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2cbabca9cd68e83f6ec950bc1e68d848, codeobj_2cbabca9cd68e83f6ec950bc1e68d848, module_cryptography$x509$oid, sizeof(void *)+sizeof(void *) );
    frame_2cbabca9cd68e83f6ec950bc1e68d848 = cache_frame_2cbabca9cd68e83f6ec950bc1e68d848;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2cbabca9cd68e83f6ec950bc1e68d848 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2cbabca9cd68e83f6ec950bc1e68d848 ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_self;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = par_other;

    CHECK_OBJECT( tmp_compexpr_right_1 );
    tmp_operand_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cbabca9cd68e83f6ec950bc1e68d848 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cbabca9cd68e83f6ec950bc1e68d848 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2cbabca9cd68e83f6ec950bc1e68d848 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2cbabca9cd68e83f6ec950bc1e68d848, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2cbabca9cd68e83f6ec950bc1e68d848->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2cbabca9cd68e83f6ec950bc1e68d848, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2cbabca9cd68e83f6ec950bc1e68d848,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_2cbabca9cd68e83f6ec950bc1e68d848 == cache_frame_2cbabca9cd68e83f6ec950bc1e68d848 )
    {
        Py_DECREF( frame_2cbabca9cd68e83f6ec950bc1e68d848 );
    }
    cache_frame_2cbabca9cd68e83f6ec950bc1e68d848 = NULL;

    assertFrameObject( frame_2cbabca9cd68e83f6ec950bc1e68d848 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_3___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_3___ne__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$oid$$$function_4___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_2ed941db4bc0f53df6af0692c49d452f = NULL;

    struct Nuitka_FrameObject *frame_2ed941db4bc0f53df6af0692c49d452f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2ed941db4bc0f53df6af0692c49d452f, codeobj_2ed941db4bc0f53df6af0692c49d452f, module_cryptography$x509$oid, sizeof(void *) );
    frame_2ed941db4bc0f53df6af0692c49d452f = cache_frame_2ed941db4bc0f53df6af0692c49d452f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2ed941db4bc0f53df6af0692c49d452f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2ed941db4bc0f53df6af0692c49d452f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = const_str_digest_e1378b6a93344d0d02f5fc8acfacacd7;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( !(tmp_called_name_1 == NULL) );
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dotted_string );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 55;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__name );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    frame_2ed941db4bc0f53df6af0692c49d452f->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ed941db4bc0f53df6af0692c49d452f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ed941db4bc0f53df6af0692c49d452f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2ed941db4bc0f53df6af0692c49d452f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2ed941db4bc0f53df6af0692c49d452f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2ed941db4bc0f53df6af0692c49d452f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2ed941db4bc0f53df6af0692c49d452f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2ed941db4bc0f53df6af0692c49d452f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_2ed941db4bc0f53df6af0692c49d452f == cache_frame_2ed941db4bc0f53df6af0692c49d452f )
    {
        Py_DECREF( frame_2ed941db4bc0f53df6af0692c49d452f );
    }
    cache_frame_2ed941db4bc0f53df6af0692c49d452f = NULL;

    assertFrameObject( frame_2ed941db4bc0f53df6af0692c49d452f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_4___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_4___repr__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$oid$$$function_5___hash__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_hash_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_044e1785ee9f3c88a4a2e0fe2151a8a0 = NULL;

    struct Nuitka_FrameObject *frame_044e1785ee9f3c88a4a2e0fe2151a8a0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_044e1785ee9f3c88a4a2e0fe2151a8a0, codeobj_044e1785ee9f3c88a4a2e0fe2151a8a0, module_cryptography$x509$oid, sizeof(void *) );
    frame_044e1785ee9f3c88a4a2e0fe2151a8a0 = cache_frame_044e1785ee9f3c88a4a2e0fe2151a8a0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_044e1785ee9f3c88a4a2e0fe2151a8a0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_044e1785ee9f3c88a4a2e0fe2151a8a0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_hash_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dotted_string );
    if ( tmp_hash_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BUILTIN_HASH( tmp_hash_arg_1 );
    Py_DECREF( tmp_hash_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_044e1785ee9f3c88a4a2e0fe2151a8a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_044e1785ee9f3c88a4a2e0fe2151a8a0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_044e1785ee9f3c88a4a2e0fe2151a8a0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_044e1785ee9f3c88a4a2e0fe2151a8a0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_044e1785ee9f3c88a4a2e0fe2151a8a0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_044e1785ee9f3c88a4a2e0fe2151a8a0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_044e1785ee9f3c88a4a2e0fe2151a8a0,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_044e1785ee9f3c88a4a2e0fe2151a8a0 == cache_frame_044e1785ee9f3c88a4a2e0fe2151a8a0 )
    {
        Py_DECREF( frame_044e1785ee9f3c88a4a2e0fe2151a8a0 );
    }
    cache_frame_044e1785ee9f3c88a4a2e0fe2151a8a0 = NULL;

    assertFrameObject( frame_044e1785ee9f3c88a4a2e0fe2151a8a0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_5___hash__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_5___hash__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$x509$oid$$$function_6__name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_38a08d196328375330bcb5920055f51f = NULL;

    struct Nuitka_FrameObject *frame_38a08d196328375330bcb5920055f51f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_38a08d196328375330bcb5920055f51f, codeobj_38a08d196328375330bcb5920055f51f, module_cryptography$x509$oid, sizeof(void *) );
    frame_38a08d196328375330bcb5920055f51f = cache_frame_38a08d196328375330bcb5920055f51f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_38a08d196328375330bcb5920055f51f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_38a08d196328375330bcb5920055f51f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain__OID_NAMES );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__OID_NAMES );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_OID_NAMES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_str_digest_bf0a391ed0a4489c54a838031c5929be;
    frame_38a08d196328375330bcb5920055f51f->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38a08d196328375330bcb5920055f51f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_38a08d196328375330bcb5920055f51f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_38a08d196328375330bcb5920055f51f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_38a08d196328375330bcb5920055f51f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_38a08d196328375330bcb5920055f51f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_38a08d196328375330bcb5920055f51f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_38a08d196328375330bcb5920055f51f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_38a08d196328375330bcb5920055f51f == cache_frame_38a08d196328375330bcb5920055f51f )
    {
        Py_DECREF( frame_38a08d196328375330bcb5920055f51f );
    }
    cache_frame_38a08d196328375330bcb5920055f51f = NULL;

    assertFrameObject( frame_38a08d196328375330bcb5920055f51f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_6__name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid$$$function_6__name );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$oid$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        const_str_digest_b9034be89ceffc7e47a52abddeb5f6bd,
#endif
        codeobj_eacdc9ea13d948d90918f9472ff63c62,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$oid,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_2___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$oid$$$function_2___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        const_str_digest_4d6b2240da355b093304532a38b9315b,
#endif
        codeobj_22d24b99aca1f4486ed993b35e01e6bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$oid,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_3___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$oid$$$function_3___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 300
        const_str_digest_7e1cd35ea5517b9b5d7382f57546e80b,
#endif
        codeobj_2cbabca9cd68e83f6ec950bc1e68d848,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$oid,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_4___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$oid$$$function_4___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 300
        const_str_digest_f0466168cc522d6329cd664ce084d453,
#endif
        codeobj_2ed941db4bc0f53df6af0692c49d452f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$oid,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_5___hash__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$oid$$$function_5___hash__,
        const_str_plain___hash__,
#if PYTHON_VERSION >= 300
        const_str_digest_d03446569431a2d7e5a8eb6f1a6c779c,
#endif
        codeobj_044e1785ee9f3c88a4a2e0fe2151a8a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$oid,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$x509$oid$$$function_6__name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$x509$oid$$$function_6__name,
        const_str_plain__name,
#if PYTHON_VERSION >= 300
        const_str_digest_caddb782481a854076d3f89e9c4846e8,
#endif
        codeobj_38a08d196328375330bcb5920055f51f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$x509$oid,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$x509$oid =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.x509.oid",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;

extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( cryptography$x509$oid )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$x509$oid );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("cryptography.x509.oid: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.x509.oid: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.x509.oid: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$x509$oid" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$x509$oid = Py_InitModule4(
        "cryptography.x509.oid",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$x509$oid = PyModule_Create( &mdef_cryptography$x509$oid );
#endif

    moduledict_cryptography$x509$oid = MODULE_DICT( module_cryptography$x509$oid );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$x509$oid,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509$oid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$x509$oid,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$x509$oid );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35, module_cryptography$x509$oid );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
    PyObject *tmp_bases_name_8;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_instance_13;
    PyObject *tmp_called_instance_14;
    PyObject *tmp_called_instance_15;
    PyObject *tmp_called_instance_16;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    PyObject *tmp_called_name_48;
    PyObject *tmp_called_name_49;
    PyObject *tmp_called_name_50;
    PyObject *tmp_called_name_51;
    PyObject *tmp_called_name_52;
    PyObject *tmp_called_name_53;
    PyObject *tmp_called_name_54;
    PyObject *tmp_called_name_55;
    PyObject *tmp_called_name_56;
    PyObject *tmp_called_name_57;
    PyObject *tmp_called_name_58;
    PyObject *tmp_called_name_59;
    PyObject *tmp_called_name_60;
    PyObject *tmp_called_name_61;
    PyObject *tmp_called_name_62;
    PyObject *tmp_called_name_63;
    PyObject *tmp_called_name_64;
    PyObject *tmp_called_name_65;
    PyObject *tmp_called_name_66;
    PyObject *tmp_called_name_67;
    PyObject *tmp_called_name_68;
    PyObject *tmp_called_name_69;
    PyObject *tmp_called_name_70;
    PyObject *tmp_called_name_71;
    PyObject *tmp_called_name_72;
    PyObject *tmp_called_name_73;
    PyObject *tmp_called_name_74;
    PyObject *tmp_called_name_75;
    PyObject *tmp_called_name_76;
    PyObject *tmp_called_name_77;
    PyObject *tmp_called_name_78;
    PyObject *tmp_called_name_79;
    PyObject *tmp_called_name_80;
    PyObject *tmp_called_name_81;
    PyObject *tmp_called_name_82;
    PyObject *tmp_called_name_83;
    PyObject *tmp_called_name_84;
    PyObject *tmp_called_name_85;
    PyObject *tmp_called_name_86;
    PyObject *tmp_called_name_87;
    PyObject *tmp_called_name_88;
    PyObject *tmp_called_name_89;
    PyObject *tmp_called_name_90;
    PyObject *tmp_called_name_91;
    PyObject *tmp_called_name_92;
    PyObject *tmp_called_name_93;
    PyObject *tmp_called_name_94;
    PyObject *tmp_called_name_95;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_key_18;
    PyObject *tmp_dict_key_19;
    PyObject *tmp_dict_key_20;
    PyObject *tmp_dict_key_21;
    PyObject *tmp_dict_key_22;
    PyObject *tmp_dict_key_23;
    PyObject *tmp_dict_key_24;
    PyObject *tmp_dict_key_25;
    PyObject *tmp_dict_key_26;
    PyObject *tmp_dict_key_27;
    PyObject *tmp_dict_key_28;
    PyObject *tmp_dict_key_29;
    PyObject *tmp_dict_key_30;
    PyObject *tmp_dict_key_31;
    PyObject *tmp_dict_key_32;
    PyObject *tmp_dict_key_33;
    PyObject *tmp_dict_key_34;
    PyObject *tmp_dict_key_35;
    PyObject *tmp_dict_key_36;
    PyObject *tmp_dict_key_37;
    PyObject *tmp_dict_key_38;
    PyObject *tmp_dict_key_39;
    PyObject *tmp_dict_key_40;
    PyObject *tmp_dict_key_41;
    PyObject *tmp_dict_key_42;
    PyObject *tmp_dict_key_43;
    PyObject *tmp_dict_key_44;
    PyObject *tmp_dict_key_45;
    PyObject *tmp_dict_key_46;
    PyObject *tmp_dict_key_47;
    PyObject *tmp_dict_key_48;
    PyObject *tmp_dict_key_49;
    PyObject *tmp_dict_key_50;
    PyObject *tmp_dict_key_51;
    PyObject *tmp_dict_key_52;
    PyObject *tmp_dict_key_53;
    PyObject *tmp_dict_key_54;
    PyObject *tmp_dict_key_55;
    PyObject *tmp_dict_key_56;
    PyObject *tmp_dict_key_57;
    PyObject *tmp_dict_key_58;
    PyObject *tmp_dict_key_59;
    PyObject *tmp_dict_key_60;
    PyObject *tmp_dict_key_61;
    PyObject *tmp_dict_key_62;
    PyObject *tmp_dict_key_63;
    PyObject *tmp_dict_key_64;
    PyObject *tmp_dict_key_65;
    PyObject *tmp_dict_key_66;
    PyObject *tmp_dict_key_67;
    PyObject *tmp_dict_key_68;
    PyObject *tmp_dict_key_69;
    PyObject *tmp_dict_key_70;
    PyObject *tmp_dict_key_71;
    PyObject *tmp_dict_key_72;
    PyObject *tmp_dict_key_73;
    PyObject *tmp_dict_key_74;
    PyObject *tmp_dict_key_75;
    PyObject *tmp_dict_key_76;
    PyObject *tmp_dict_key_77;
    PyObject *tmp_dict_key_78;
    PyObject *tmp_dict_key_79;
    PyObject *tmp_dict_key_80;
    PyObject *tmp_dict_key_81;
    PyObject *tmp_dict_key_82;
    PyObject *tmp_dict_key_83;
    PyObject *tmp_dict_key_84;
    PyObject *tmp_dict_key_85;
    PyObject *tmp_dict_key_86;
    PyObject *tmp_dict_key_87;
    PyObject *tmp_dict_key_88;
    PyObject *tmp_dict_key_89;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_dict_name_21;
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dict_name_23;
    PyObject *tmp_dict_name_24;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_dict_value_18;
    PyObject *tmp_dict_value_19;
    PyObject *tmp_dict_value_20;
    PyObject *tmp_dict_value_21;
    PyObject *tmp_dict_value_22;
    PyObject *tmp_dict_value_23;
    PyObject *tmp_dict_value_24;
    PyObject *tmp_dict_value_25;
    PyObject *tmp_dict_value_26;
    PyObject *tmp_dict_value_27;
    PyObject *tmp_dict_value_28;
    PyObject *tmp_dict_value_29;
    PyObject *tmp_dict_value_30;
    PyObject *tmp_dict_value_31;
    PyObject *tmp_dict_value_32;
    PyObject *tmp_dict_value_33;
    PyObject *tmp_dict_value_34;
    PyObject *tmp_dict_value_35;
    PyObject *tmp_dict_value_36;
    PyObject *tmp_dict_value_37;
    PyObject *tmp_dict_value_38;
    PyObject *tmp_dict_value_39;
    PyObject *tmp_dict_value_40;
    PyObject *tmp_dict_value_41;
    PyObject *tmp_dict_value_42;
    PyObject *tmp_dict_value_43;
    PyObject *tmp_dict_value_44;
    PyObject *tmp_dict_value_45;
    PyObject *tmp_dict_value_46;
    PyObject *tmp_dict_value_47;
    PyObject *tmp_dict_value_48;
    PyObject *tmp_dict_value_49;
    PyObject *tmp_dict_value_50;
    PyObject *tmp_dict_value_51;
    PyObject *tmp_dict_value_52;
    PyObject *tmp_dict_value_53;
    PyObject *tmp_dict_value_54;
    PyObject *tmp_dict_value_55;
    PyObject *tmp_dict_value_56;
    PyObject *tmp_dict_value_57;
    PyObject *tmp_dict_value_58;
    PyObject *tmp_dict_value_59;
    PyObject *tmp_dict_value_60;
    PyObject *tmp_dict_value_61;
    PyObject *tmp_dict_value_62;
    PyObject *tmp_dict_value_63;
    PyObject *tmp_dict_value_64;
    PyObject *tmp_dict_value_65;
    PyObject *tmp_dict_value_66;
    PyObject *tmp_dict_value_67;
    PyObject *tmp_dict_value_68;
    PyObject *tmp_dict_value_69;
    PyObject *tmp_dict_value_70;
    PyObject *tmp_dict_value_71;
    PyObject *tmp_dict_value_72;
    PyObject *tmp_dict_value_73;
    PyObject *tmp_dict_value_74;
    PyObject *tmp_dict_value_75;
    PyObject *tmp_dict_value_76;
    PyObject *tmp_dict_value_77;
    PyObject *tmp_dict_value_78;
    PyObject *tmp_dict_value_79;
    PyObject *tmp_dict_value_80;
    PyObject *tmp_dict_value_81;
    PyObject *tmp_dict_value_82;
    PyObject *tmp_dict_value_83;
    PyObject *tmp_dict_value_84;
    PyObject *tmp_dict_value_85;
    PyObject *tmp_dict_value_86;
    PyObject *tmp_dict_value_87;
    PyObject *tmp_dict_value_88;
    PyObject *tmp_dict_value_89;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_key_name_13;
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_key_name_21;
    PyObject *tmp_key_name_22;
    PyObject *tmp_key_name_23;
    PyObject *tmp_key_name_24;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_metaclass_name_8;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_source_name_87;
    PyObject *tmp_source_name_88;
    PyObject *tmp_source_name_89;
    PyObject *tmp_source_name_90;
    PyObject *tmp_source_name_91;
    PyObject *tmp_source_name_92;
    PyObject *tmp_source_name_93;
    PyObject *tmp_source_name_94;
    PyObject *tmp_source_name_95;
    PyObject *tmp_source_name_96;
    PyObject *tmp_source_name_97;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    static struct Nuitka_FrameObject *cache_frame_b59ce8e335d87639c9aa02d83b5a9f62_2 = NULL;

    struct Nuitka_FrameObject *frame_b59ce8e335d87639c9aa02d83b5a9f62_2;

    static struct Nuitka_FrameObject *cache_frame_d36b8067ff970292af9d1b5ef15fb8d7_3 = NULL;

    struct Nuitka_FrameObject *frame_d36b8067ff970292af9d1b5ef15fb8d7_3;

    static struct Nuitka_FrameObject *cache_frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 = NULL;

    struct Nuitka_FrameObject *frame_19374a4cbe0cb45c8ef4b3687f4d1626_4;

    static struct Nuitka_FrameObject *cache_frame_680032cf9fc9839bb6e41a76a46d2da9_5 = NULL;

    struct Nuitka_FrameObject *frame_680032cf9fc9839bb6e41a76a46d2da9_5;

    static struct Nuitka_FrameObject *cache_frame_74db009ebb9527a7b95381a5bc0c8fe9_6 = NULL;

    struct Nuitka_FrameObject *frame_74db009ebb9527a7b95381a5bc0c8fe9_6;

    static struct Nuitka_FrameObject *cache_frame_53a93e878c9d6c7662b31882a9b0d478_7 = NULL;

    struct Nuitka_FrameObject *frame_53a93e878c9d6c7662b31882a9b0d478_7;

    static struct Nuitka_FrameObject *cache_frame_10d02b76d4df16df19cd3d03c2c6911f_8 = NULL;

    struct Nuitka_FrameObject *frame_10d02b76d4df16df19cd3d03c2c6911f_8;

    static struct Nuitka_FrameObject *cache_frame_8706214e66a720fa12d0dc004ada394c_9 = NULL;

    struct Nuitka_FrameObject *frame_8706214e66a720fa12d0dc004ada394c_9;

    struct Nuitka_FrameObject *frame_bb39115ecdd75e08807811d1ec7276f7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    PyObject *locals_cryptography$x509$oid_185 = NULL;
    PyObject *locals_cryptography$x509$oid_69 = NULL;
    PyObject *locals_cryptography$x509$oid_131 = NULL;
    PyObject *locals_cryptography$x509$oid_96 = NULL;
    PyObject *locals_cryptography$x509$oid_170 = NULL;
    PyObject *locals_cryptography$x509$oid_102 = NULL;
    PyObject *locals_cryptography$x509$oid_11 = NULL;
    PyObject *locals_cryptography$x509$oid_180 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_4 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_bb39115ecdd75e08807811d1ec7276f7 = MAKE_MODULE_FRAME( codeobj_bb39115ecdd75e08807811d1ec7276f7, module_cryptography$x509$oid );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_bb39115ecdd75e08807811d1ec7276f7 );
    assert( Py_REFCNT( frame_bb39115ecdd75e08807811d1ec7276f7 ) == 2 );

    // Framed code:
    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_1 = const_str_plain_cryptography;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$x509$oid;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_utils_tuple;
    tmp_level_name_1 = const_int_0;
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_utils );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_digest_9db3cdd3cd765463b4eec6754eb8e087;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$x509$oid;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_hashes_tuple;
    tmp_level_name_2 = const_int_0;
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 8;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_hashes );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes, tmp_assign_source_9 );
    tmp_assign_source_10 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_10;

    // Tried code:
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_metaclass_name_1 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_1 != NULL );
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_1:;
    tmp_bases_name_1 = const_tuple_type_object_tuple;
    tmp_assign_source_11 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_11;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_source_name_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = const_tuple_str_plain_ObjectIdentifier_tuple_type_object_tuple_tuple;
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 11;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_12 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_12;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$x509$oid_11 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_11, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_4;
    }
    tmp_dictset_value = const_str_plain_ObjectIdentifier;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_11, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_4;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_b59ce8e335d87639c9aa02d83b5a9f62_2, codeobj_b59ce8e335d87639c9aa02d83b5a9f62, module_cryptography$x509$oid, sizeof(void *) );
    frame_b59ce8e335d87639c9aa02d83b5a9f62_2 = cache_frame_b59ce8e335d87639c9aa02d83b5a9f62_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b59ce8e335d87639c9aa02d83b5a9f62_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b59ce8e335d87639c9aa02d83b5a9f62_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$oid$$$function_1___init__(  );
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_11, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$oid$$$function_2___eq__(  );
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_11, const_str_plain___eq__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$oid$$$function_3___ne__(  );
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_11, const_str_plain___ne__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$oid$$$function_4___repr__(  );
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_11, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_cryptography$x509$oid$$$function_5___hash__(  );
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_11, const_str_plain___hash__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = MAPPING_HAS_ITEM( locals_cryptography$x509$oid_11, const_str_plain_property );

    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_called_name_2 = PyObject_GetItem( locals_cryptography$x509$oid_11, const_str_plain_property );

    if ( tmp_called_name_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "property" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_args_element_name_1 = MAKE_FUNCTION_cryptography$x509$oid$$$function_6__name(  );
    frame_b59ce8e335d87639c9aa02d83b5a9f62_2->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_called_name_3 = (PyObject *)&PyProperty_Type;
    tmp_args_element_name_2 = MAKE_FUNCTION_cryptography$x509$oid$$$function_6__name(  );
    frame_b59ce8e335d87639c9aa02d83b5a9f62_2->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    condexpr_end_3:;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_11, const_str_plain__name, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_called_instance_1 = PyObject_GetItem( locals_cryptography$x509$oid_11, const_str_plain_utils );

    if ( tmp_called_instance_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_utils );

        if (unlikely( tmp_called_instance_1 == NULL ))
        {
            tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
        }

        if ( tmp_called_instance_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "utils" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    frame_b59ce8e335d87639c9aa02d83b5a9f62_2->m_frame.f_lineno = 66;
    tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_read_only_property, &PyTuple_GET_ITEM( const_tuple_str_plain__dotted_string_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_11, const_str_plain_dotted_string, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b59ce8e335d87639c9aa02d83b5a9f62_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b59ce8e335d87639c9aa02d83b5a9f62_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b59ce8e335d87639c9aa02d83b5a9f62_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b59ce8e335d87639c9aa02d83b5a9f62_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b59ce8e335d87639c9aa02d83b5a9f62_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b59ce8e335d87639c9aa02d83b5a9f62_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_b59ce8e335d87639c9aa02d83b5a9f62_2 == cache_frame_b59ce8e335d87639c9aa02d83b5a9f62_2 )
    {
        Py_DECREF( frame_b59ce8e335d87639c9aa02d83b5a9f62_2 );
    }
    cache_frame_b59ce8e335d87639c9aa02d83b5a9f62_2 = NULL;

    assertFrameObject( frame_b59ce8e335d87639c9aa02d83b5a9f62_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_4;
    skip_nested_handling_1:;
    tmp_called_name_4 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_4 );
    tmp_tuple_element_1 = const_str_plain_ObjectIdentifier;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_cryptography$x509$oid_11;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_1 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 11;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_14;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    Py_DECREF( locals_cryptography$x509$oid_11 );
    locals_cryptography$x509$oid_11 = NULL;
    goto try_return_handler_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$x509$oid_11 );
    locals_cryptography$x509$oid_11 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 11;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_assign_source_13 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier, tmp_assign_source_13 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_assign_source_15 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_15;

    // Tried code:
    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_4:;
    tmp_bases_name_2 = const_tuple_type_object_tuple;
    tmp_assign_source_16 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_16;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    branch_no_2:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_source_name_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    tmp_args_name_3 = const_tuple_str_plain_ExtensionOID_tuple_type_object_tuple_tuple;
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 69;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_assign_source_17 = PyDict_New();
    condexpr_end_5:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_17;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$x509$oid_69 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_7;
    }
    tmp_dictset_value = const_str_plain_ExtensionOID;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_7;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_d36b8067ff970292af9d1b5ef15fb8d7_3, codeobj_d36b8067ff970292af9d1b5ef15fb8d7, module_cryptography$x509$oid, sizeof(void *) );
    frame_d36b8067ff970292af9d1b5ef15fb8d7_3 = cache_frame_d36b8067ff970292af9d1b5ef15fb8d7_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d36b8067ff970292af9d1b5ef15fb8d7_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d36b8067ff970292af9d1b5ef15fb8d7_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_6 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_6 == NULL ))
        {
            tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 70;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 70;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_digest_aa35b543e4cc4067ce2da705a47d19ca_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_7 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_7 == NULL ))
        {
            tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 71;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 71;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_str_digest_402231cec73b599b9bdec4daf7775016_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_SUBJECT_KEY_IDENTIFIER, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_8 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_8 == NULL ))
        {
            tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 72;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_digest_bdfb3765c1e356e48168ea62bfdbf9a4_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_KEY_USAGE, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_9 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_9 == NULL ))
        {
            tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 73;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 73;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, &PyTuple_GET_ITEM( const_tuple_str_digest_767d9ff9e747b20f9b2a62cdf04da0de_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_SUBJECT_ALTERNATIVE_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_10 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_10 == NULL ))
        {
            tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 74;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 74;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, &PyTuple_GET_ITEM( const_tuple_str_digest_5f81f25c17be8379db8d57e313b947b2_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_ISSUER_ALTERNATIVE_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_11 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_11 == NULL ))
        {
            tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 75;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 75;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_str_digest_91f2c2e6a76ab0257b7afd78a7d8444b_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_BASIC_CONSTRAINTS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_12 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_12 == NULL ))
        {
            tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 76;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 76;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_str_digest_2958a1ef6593e1758ab759e3a2c573e0_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_NAME_CONSTRAINTS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_13 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_13 == NULL ))
        {
            tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 77;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 77;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, &PyTuple_GET_ITEM( const_tuple_str_digest_32f8ab72218c1518444529b9839bc60e_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_CRL_DISTRIBUTION_POINTS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_14 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_14 == NULL ))
        {
            tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 78;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 78;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, &PyTuple_GET_ITEM( const_tuple_str_digest_ddbc81b7b0b155d69df8105b5cff8140_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_CERTIFICATE_POLICIES, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_15 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_15 == NULL ))
        {
            tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 79;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 79;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, &PyTuple_GET_ITEM( const_tuple_str_digest_d2f818cdf8c42e2d6390ddd53b016587_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_POLICY_MAPPINGS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_16 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_16 == NULL ))
        {
            tmp_called_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 80;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 80;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_str_digest_178f043eb8a7ce81b9dfbff61f4c5f19_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_AUTHORITY_KEY_IDENTIFIER, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_17 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_17 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_17 == NULL ))
        {
            tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 81;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, &PyTuple_GET_ITEM( const_tuple_str_digest_b0abccc6631aa6b85de08f4a664daadd_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_POLICY_CONSTRAINTS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_18 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_18 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_18 == NULL ))
        {
            tmp_called_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 82;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 82;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, &PyTuple_GET_ITEM( const_tuple_str_digest_a690942c66e69d63578daefd13197ae2_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_EXTENDED_KEY_USAGE, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_19 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_19 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_19 == NULL ))
        {
            tmp_called_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 83;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 83;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, &PyTuple_GET_ITEM( const_tuple_str_digest_017b3818c501a0f2bbf7f46bc35fb8d6_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_FRESHEST_CRL, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_20 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_20 == NULL ))
        {
            tmp_called_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 84;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 84;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, &PyTuple_GET_ITEM( const_tuple_str_digest_0779a69d82c4a51e4fdc8382116baf07_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_INHIBIT_ANY_POLICY, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_21 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_21 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_21 == NULL ))
        {
            tmp_called_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 85;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 85;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, &PyTuple_GET_ITEM( const_tuple_str_digest_36815fa72b8e26b8a0343e58e525a6b8_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_AUTHORITY_INFORMATION_ACCESS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_22 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_22 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_22 == NULL ))
        {
            tmp_called_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 86;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 86;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, &PyTuple_GET_ITEM( const_tuple_str_digest_2bb014389d4aa5909b80bc2e19c3df8a_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_SUBJECT_INFORMATION_ACCESS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_23 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_23 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_23 == NULL ))
        {
            tmp_called_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 87;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 87;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, &PyTuple_GET_ITEM( const_tuple_str_digest_1135dc3548cae245667224b61d063e8f_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_OCSP_NO_CHECK, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_24 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_24 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_24 == NULL ))
        {
            tmp_called_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 88;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_24, &PyTuple_GET_ITEM( const_tuple_str_digest_c721cd011be8e0f6c97e5d0f5ec94d60_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_TLS_FEATURE, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_25 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_25 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_25 == NULL ))
        {
            tmp_called_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 89;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 89;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, &PyTuple_GET_ITEM( const_tuple_str_digest_48bb56d35289ac7c69544408e253d64a_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_CRL_NUMBER, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_26 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_26 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_26 == NULL ))
        {
            tmp_called_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 90;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 90;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, &PyTuple_GET_ITEM( const_tuple_str_digest_8004dc93b6b3bd5578dfd84dda8defdc_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_DELTA_CRL_INDICATOR, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_name_27 = PyObject_GetItem( locals_cryptography$x509$oid_69, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_27 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_27 == NULL ))
        {
            tmp_called_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 92;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame.f_lineno = 92;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, &PyTuple_GET_ITEM( const_tuple_str_digest_9f975f715f271ffc97cba117d4ed2c89_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_69, const_str_plain_PRECERT_SIGNED_CERTIFICATE_TIMESTAMPS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d36b8067ff970292af9d1b5ef15fb8d7_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d36b8067ff970292af9d1b5ef15fb8d7_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d36b8067ff970292af9d1b5ef15fb8d7_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d36b8067ff970292af9d1b5ef15fb8d7_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d36b8067ff970292af9d1b5ef15fb8d7_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d36b8067ff970292af9d1b5ef15fb8d7_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_d36b8067ff970292af9d1b5ef15fb8d7_3 == cache_frame_d36b8067ff970292af9d1b5ef15fb8d7_3 )
    {
        Py_DECREF( frame_d36b8067ff970292af9d1b5ef15fb8d7_3 );
    }
    cache_frame_d36b8067ff970292af9d1b5ef15fb8d7_3 = NULL;

    assertFrameObject( frame_d36b8067ff970292af9d1b5ef15fb8d7_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_7;
    skip_nested_handling_2:;
    tmp_called_name_28 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_28 );
    tmp_tuple_element_2 = const_str_plain_ExtensionOID;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_cryptography$x509$oid_69;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_2 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 69;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;

        goto try_except_handler_7;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_19;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    Py_DECREF( locals_cryptography$x509$oid_69 );
    locals_cryptography$x509$oid_69 = NULL;
    goto try_return_handler_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$x509$oid_69 );
    locals_cryptography$x509$oid_69 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 69;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_assign_source_18 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID, tmp_assign_source_18 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    tmp_assign_source_20 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_20;

    // Tried code:
    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_metaclass_name_3 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_3 != NULL );
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_6:;
    tmp_bases_name_3 = const_tuple_type_object_tuple;
    tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_21;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    branch_no_3:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_source_name_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_3 );
    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___prepare__ );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    tmp_args_name_5 = const_tuple_str_plain_CRLEntryExtensionOID_tuple_type_object_tuple_tuple;
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 96;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_29 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_8;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_assign_source_22 = PyDict_New();
    condexpr_end_7:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_22;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$x509$oid_96 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_96, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_10;
    }
    tmp_dictset_value = const_str_plain_CRLEntryExtensionOID;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_96, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_10;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_19374a4cbe0cb45c8ef4b3687f4d1626_4, codeobj_19374a4cbe0cb45c8ef4b3687f4d1626, module_cryptography$x509$oid, sizeof(void *) );
    frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 = cache_frame_19374a4cbe0cb45c8ef4b3687f4d1626_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_30 = PyObject_GetItem( locals_cryptography$x509$oid_96, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_30 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_30 == NULL ))
        {
            tmp_called_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 97;
            type_description_2 = "N";
            goto frame_exception_exit_4;
        }

        }
    }

    frame_19374a4cbe0cb45c8ef4b3687f4d1626_4->m_frame.f_lineno = 97;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, &PyTuple_GET_ITEM( const_tuple_str_digest_9cd8ba296cec323cf723a82cc76d4826_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_96, const_str_plain_CERTIFICATE_ISSUER, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_called_name_31 = PyObject_GetItem( locals_cryptography$x509$oid_96, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_31 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_31 == NULL ))
        {
            tmp_called_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_2 = "N";
            goto frame_exception_exit_4;
        }

        }
    }

    frame_19374a4cbe0cb45c8ef4b3687f4d1626_4->m_frame.f_lineno = 98;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, &PyTuple_GET_ITEM( const_tuple_str_digest_0289302dc46017fd66759aa38355e887_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_96, const_str_plain_CRL_REASON, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_called_name_32 = PyObject_GetItem( locals_cryptography$x509$oid_96, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_32 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_32 == NULL ))
        {
            tmp_called_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_2 = "N";
            goto frame_exception_exit_4;
        }

        }
    }

    frame_19374a4cbe0cb45c8ef4b3687f4d1626_4->m_frame.f_lineno = 99;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, &PyTuple_GET_ITEM( const_tuple_str_digest_7aeeff5313ae33015bc6068c49b2834d_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_96, const_str_plain_INVALIDITY_DATE, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19374a4cbe0cb45c8ef4b3687f4d1626_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19374a4cbe0cb45c8ef4b3687f4d1626_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19374a4cbe0cb45c8ef4b3687f4d1626_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19374a4cbe0cb45c8ef4b3687f4d1626_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 == cache_frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 )
    {
        Py_DECREF( frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 );
    }
    cache_frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 = NULL;

    assertFrameObject( frame_19374a4cbe0cb45c8ef4b3687f4d1626_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_10;
    skip_nested_handling_3:;
    tmp_called_name_33 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_33 );
    tmp_tuple_element_3 = const_str_plain_CRLEntryExtensionOID;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_cryptography$x509$oid_96;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_3 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 96;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_10;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_24;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    Py_DECREF( locals_cryptography$x509$oid_96 );
    locals_cryptography$x509$oid_96 = NULL;
    goto try_return_handler_9;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$x509$oid_96 );
    locals_cryptography$x509$oid_96 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_9:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 96;
    goto try_except_handler_8;
    outline_result_3:;
    tmp_assign_source_23 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID, tmp_assign_source_23 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    tmp_assign_source_25 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_25;

    // Tried code:
    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    tmp_cond_value_8 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_metaclass_name_4 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_4 != NULL );
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_8:;
    tmp_bases_name_4 = const_tuple_type_object_tuple;
    tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_26;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    branch_no_4:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_source_name_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    tmp_args_name_7 = const_tuple_str_plain_NameOID_tuple_type_object_tuple_tuple;
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 102;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_34, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_34 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_11;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_assign_source_27 = PyDict_New();
    condexpr_end_9:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_27;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$x509$oid_102 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_13;
    }
    tmp_dictset_value = const_str_plain_NameOID;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_13;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_680032cf9fc9839bb6e41a76a46d2da9_5, codeobj_680032cf9fc9839bb6e41a76a46d2da9, module_cryptography$x509$oid, sizeof(void *) );
    frame_680032cf9fc9839bb6e41a76a46d2da9_5 = cache_frame_680032cf9fc9839bb6e41a76a46d2da9_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_680032cf9fc9839bb6e41a76a46d2da9_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_680032cf9fc9839bb6e41a76a46d2da9_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_35 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_35 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_35 == NULL ))
        {
            tmp_called_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 103;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 103;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, &PyTuple_GET_ITEM( const_tuple_str_digest_f57d825cad34aac5809c155ba8a3ebb1_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_COMMON_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_36 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_36 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_36 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_36 == NULL ))
        {
            tmp_called_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 104;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 104;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, &PyTuple_GET_ITEM( const_tuple_str_digest_aa13593fc87e4f4e4b2b52fd048b3e8a_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_COUNTRY_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_37 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_37 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_37 == NULL ))
        {
            tmp_called_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_37 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 105;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 105;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, &PyTuple_GET_ITEM( const_tuple_str_digest_6cf4c807f183a057576c391d9f7c4e24_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_LOCALITY_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_38 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_38 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_38 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_38 == NULL ))
        {
            tmp_called_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 106;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, &PyTuple_GET_ITEM( const_tuple_str_digest_57dccc3876eef2cf5cfce321a32febb5_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_STATE_OR_PROVINCE_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_39 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_39 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_39 == NULL ))
        {
            tmp_called_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_39 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 107;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, &PyTuple_GET_ITEM( const_tuple_str_digest_e69bc10a8fca5202a28e2cd518549779_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_STREET_ADDRESS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_40 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_40 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_40 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_40 == NULL ))
        {
            tmp_called_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_40 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 108;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, &PyTuple_GET_ITEM( const_tuple_str_digest_76c946398dd022b7261d46aa6240716f_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_ORGANIZATION_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_41 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_41 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_41 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_41 == NULL ))
        {
            tmp_called_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 109;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 109;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, &PyTuple_GET_ITEM( const_tuple_str_digest_43626b342da00ed10ddfece11d183700_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_ORGANIZATIONAL_UNIT_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_42 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_42 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_42 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_42 == NULL ))
        {
            tmp_called_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_42 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 110;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 110;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, &PyTuple_GET_ITEM( const_tuple_str_digest_4e0fd9298619640af3a4dad2f13d8f89_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_SERIAL_NUMBER, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_43 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_43 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_43 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_43 == NULL ))
        {
            tmp_called_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_43 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 111;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, &PyTuple_GET_ITEM( const_tuple_str_digest_e4fbe04d850088683fca472ae668e3e8_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_SURNAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_44 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_44 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_44 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_44 == NULL ))
        {
            tmp_called_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_44 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 112;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, &PyTuple_GET_ITEM( const_tuple_str_digest_2998224fa424af08b3f684a1be17945c_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_GIVEN_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_45 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_45 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_45 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_45 == NULL ))
        {
            tmp_called_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_45 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 113;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_45, &PyTuple_GET_ITEM( const_tuple_str_digest_e00b2e9d0b3aff0d7f1215741c8caf4c_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_TITLE, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_46 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_46 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_46 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_46 == NULL ))
        {
            tmp_called_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_46 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 114;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 114;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_46, &PyTuple_GET_ITEM( const_tuple_str_digest_43872ccea6747842372df8a1c4656683_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_GENERATION_QUALIFIER, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_47 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_47 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_47 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_47 == NULL ))
        {
            tmp_called_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_47 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 115;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 115;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_47, &PyTuple_GET_ITEM( const_tuple_str_digest_e8435c09f6f8bb5530cfada92d890563_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_X500_UNIQUE_IDENTIFIER, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_48 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_48 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_48 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_48 == NULL ))
        {
            tmp_called_name_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_48 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 116;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_48, &PyTuple_GET_ITEM( const_tuple_str_digest_60aaecf634db9b67af6a393dcf6de000_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_DN_QUALIFIER, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_49 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_49 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_49 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_49 == NULL ))
        {
            tmp_called_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_49 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 117;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_49, &PyTuple_GET_ITEM( const_tuple_str_digest_c0c0b06f4a096cb9cc1becef6ebea806_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_PSEUDONYM, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_50 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_50 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_50 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_50 == NULL ))
        {
            tmp_called_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_50 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 118;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, &PyTuple_GET_ITEM( const_tuple_str_digest_d987020246f2d9f737862dd92bc63eef_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_USER_ID, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_51 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_51 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_51 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_51 == NULL ))
        {
            tmp_called_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_51 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 119;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 119;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_51, &PyTuple_GET_ITEM( const_tuple_str_digest_1ca6abdf9952a7d39297c45ba720642a_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_DOMAIN_COMPONENT, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_52 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_52 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_52 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_52 == NULL ))
        {
            tmp_called_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_52 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 120;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 120;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_52, &PyTuple_GET_ITEM( const_tuple_str_digest_7f9fa75ff292bac6aecf30cc58bc9469_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_EMAIL_ADDRESS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_53 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_53 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_53 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_53 == NULL ))
        {
            tmp_called_name_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_53 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 121;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 121;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_53, &PyTuple_GET_ITEM( const_tuple_str_digest_8c8a2a5fe21909055ee3a38044fbeaa0_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_JURISDICTION_COUNTRY_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_54 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_54 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_54 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_54 == NULL ))
        {
            tmp_called_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_54 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 122;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_54, &PyTuple_GET_ITEM( const_tuple_str_digest_163cafdc0ed554748c9a4b5a8c664335_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_JURISDICTION_LOCALITY_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_55 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_55 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_55 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_55 == NULL ))
        {
            tmp_called_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_55 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 123;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 123;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_55, &PyTuple_GET_ITEM( const_tuple_str_digest_81ded7bbfd939cddeb47d500a53437b8_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_JURISDICTION_STATE_OR_PROVINCE_NAME, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_56 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_56 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_56 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_56 == NULL ))
        {
            tmp_called_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_56 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 126;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 126;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_56, &PyTuple_GET_ITEM( const_tuple_str_digest_43752e38edbd8a4cc26d98a0eaea7118_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_BUSINESS_CATEGORY, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_57 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_57 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_57 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_57 == NULL ))
        {
            tmp_called_name_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_57 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 127;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 127;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_57, &PyTuple_GET_ITEM( const_tuple_str_digest_9593fac7fba92df6a4af11a09356bc08_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_POSTAL_ADDRESS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_name_58 = PyObject_GetItem( locals_cryptography$x509$oid_102, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_58 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_58 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_58 == NULL ))
        {
            tmp_called_name_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_58 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 128;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame.f_lineno = 128;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_58, &PyTuple_GET_ITEM( const_tuple_str_digest_4d1eecda490e15d970f849aecc70bec4_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_102, const_str_plain_POSTAL_CODE, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_680032cf9fc9839bb6e41a76a46d2da9_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_680032cf9fc9839bb6e41a76a46d2da9_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_680032cf9fc9839bb6e41a76a46d2da9_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_680032cf9fc9839bb6e41a76a46d2da9_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_680032cf9fc9839bb6e41a76a46d2da9_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_680032cf9fc9839bb6e41a76a46d2da9_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_680032cf9fc9839bb6e41a76a46d2da9_5 == cache_frame_680032cf9fc9839bb6e41a76a46d2da9_5 )
    {
        Py_DECREF( frame_680032cf9fc9839bb6e41a76a46d2da9_5 );
    }
    cache_frame_680032cf9fc9839bb6e41a76a46d2da9_5 = NULL;

    assertFrameObject( frame_680032cf9fc9839bb6e41a76a46d2da9_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_13;
    skip_nested_handling_4:;
    tmp_called_name_59 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_59 );
    tmp_tuple_element_4 = const_str_plain_NameOID;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_cryptography$x509$oid_102;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_4 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 102;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_59, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;

        goto try_except_handler_13;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_29;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    Py_DECREF( locals_cryptography$x509$oid_102 );
    locals_cryptography$x509$oid_102 = NULL;
    goto try_return_handler_12;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$x509$oid_102 );
    locals_cryptography$x509$oid_102 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 102;
    goto try_except_handler_11;
    outline_result_4:;
    tmp_assign_source_28 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID, tmp_assign_source_28 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    tmp_assign_source_30 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_30;

    // Tried code:
    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_metaclass_name_5 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_5 != NULL );
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_10:;
    tmp_bases_name_5 = const_tuple_type_object_tuple;
    tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_31;

    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    tmp_cond_value_11 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    branch_no_5:;
    tmp_hasattr_source_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_5 );
    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_source_name_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_5 );
    tmp_called_name_60 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___prepare__ );
    if ( tmp_called_name_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    tmp_args_name_9 = const_tuple_str_plain_SignatureAlgorithmOID_tuple_type_object_tuple_tuple;
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 131;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_60, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_60 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_14;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_assign_source_32 = PyDict_New();
    condexpr_end_11:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_32;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$x509$oid_131 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_16;
    }
    tmp_dictset_value = const_str_plain_SignatureAlgorithmOID;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_16;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_74db009ebb9527a7b95381a5bc0c8fe9_6, codeobj_74db009ebb9527a7b95381a5bc0c8fe9, module_cryptography$x509$oid, sizeof(void *) );
    frame_74db009ebb9527a7b95381a5bc0c8fe9_6 = cache_frame_74db009ebb9527a7b95381a5bc0c8fe9_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_74db009ebb9527a7b95381a5bc0c8fe9_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_74db009ebb9527a7b95381a5bc0c8fe9_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_61 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_61 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_61 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_61 == NULL ))
        {
            tmp_called_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_61 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 132;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 132;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_61, &PyTuple_GET_ITEM( const_tuple_str_digest_d766128dd3b188cb31a47f2b60d4f03b_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_RSA_WITH_MD5, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_62 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_62 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_62 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_62 == NULL ))
        {
            tmp_called_name_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_62 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 133;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_62, &PyTuple_GET_ITEM( const_tuple_str_digest_b84a8ae3bdd5ed5249d61bfca24aa504_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_RSA_WITH_SHA1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_63 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_63 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_63 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_63 == NULL ))
        {
            tmp_called_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_63 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 135;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_63, &PyTuple_GET_ITEM( const_tuple_str_digest_592f2dc8660724fc191cd3b965719e17_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain__RSA_WITH_SHA1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_64 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_64 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_64 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_64 == NULL ))
        {
            tmp_called_name_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_64 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 136;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_64, &PyTuple_GET_ITEM( const_tuple_str_digest_777dc680c1db5aad08fab2430d7c4782_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_RSA_WITH_SHA224, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_65 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_65 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_65 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_65 == NULL ))
        {
            tmp_called_name_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_65 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 137;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 137;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_65, &PyTuple_GET_ITEM( const_tuple_str_digest_bf7a54fbdb0b05505b05e9611f5ae528_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_RSA_WITH_SHA256, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_66 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_66 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_66 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_66 == NULL ))
        {
            tmp_called_name_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_66 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 138;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_66, &PyTuple_GET_ITEM( const_tuple_str_digest_175c6aa0dbff49caa0d29fca6c1fdbb2_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_RSA_WITH_SHA384, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_67 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_67 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_67 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_67 == NULL ))
        {
            tmp_called_name_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_67 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 139;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_67, &PyTuple_GET_ITEM( const_tuple_str_digest_cbb358e95676acbda1a7cec77811a76a_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_RSA_WITH_SHA512, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_68 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_68 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_68 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_68 == NULL ))
        {
            tmp_called_name_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_68 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 140;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 140;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_68, &PyTuple_GET_ITEM( const_tuple_str_digest_0f59f576526d1d0c3e712a7f737c95cb_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_RSASSA_PSS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_69 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_69 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_69 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_69 == NULL ))
        {
            tmp_called_name_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_69 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 141;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 141;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_69, &PyTuple_GET_ITEM( const_tuple_str_digest_35eb25ced2ccdf6bcc44b71ddad61958_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_ECDSA_WITH_SHA1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_70 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_70 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_70 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_70 == NULL ))
        {
            tmp_called_name_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_70 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 142;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 142;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_70, &PyTuple_GET_ITEM( const_tuple_str_digest_c3b73ca09086726c1f01ebb5162d733b_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_ECDSA_WITH_SHA224, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_71 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_71 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_71 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_71 == NULL ))
        {
            tmp_called_name_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_71 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 143;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 143;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_71, &PyTuple_GET_ITEM( const_tuple_str_digest_c65f30c441db755c29a6af4980e8b725_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_ECDSA_WITH_SHA256, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_72 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_72 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_72 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_72 == NULL ))
        {
            tmp_called_name_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_72 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 144;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_72, &PyTuple_GET_ITEM( const_tuple_str_digest_851be9911219ad6068e49143d3248889_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_ECDSA_WITH_SHA384, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_73 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_73 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_73 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_73 == NULL ))
        {
            tmp_called_name_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_73 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 145;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_73, &PyTuple_GET_ITEM( const_tuple_str_digest_8cf8f3c54a257961a23b52b084d86cec_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_ECDSA_WITH_SHA512, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_74 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_74 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_74 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_74 == NULL ))
        {
            tmp_called_name_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_74 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 146;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_74, &PyTuple_GET_ITEM( const_tuple_str_digest_65069b4fb9aa28cf3d80a60f2197040c_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_DSA_WITH_SHA1, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_75 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_75 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_75 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_75 == NULL ))
        {
            tmp_called_name_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_75 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 147;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_75, &PyTuple_GET_ITEM( const_tuple_str_digest_649afc4ad6dae06148c7e2d99bb38960_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_DSA_WITH_SHA224, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_name_76 = PyObject_GetItem( locals_cryptography$x509$oid_131, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_76 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_76 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_76 == NULL ))
        {
            tmp_called_name_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_76 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame.f_lineno = 148;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_76, &PyTuple_GET_ITEM( const_tuple_str_digest_d276e487e55b7f956e2f735a941b29b1_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_131, const_str_plain_DSA_WITH_SHA256, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74db009ebb9527a7b95381a5bc0c8fe9_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74db009ebb9527a7b95381a5bc0c8fe9_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_74db009ebb9527a7b95381a5bc0c8fe9_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_74db009ebb9527a7b95381a5bc0c8fe9_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_74db009ebb9527a7b95381a5bc0c8fe9_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_74db009ebb9527a7b95381a5bc0c8fe9_6,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_74db009ebb9527a7b95381a5bc0c8fe9_6 == cache_frame_74db009ebb9527a7b95381a5bc0c8fe9_6 )
    {
        Py_DECREF( frame_74db009ebb9527a7b95381a5bc0c8fe9_6 );
    }
    cache_frame_74db009ebb9527a7b95381a5bc0c8fe9_6 = NULL;

    assertFrameObject( frame_74db009ebb9527a7b95381a5bc0c8fe9_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_16;
    skip_nested_handling_5:;
    tmp_called_name_77 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_77 );
    tmp_tuple_element_5 = const_str_plain_SignatureAlgorithmOID;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_cryptography$x509$oid_131;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_5 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 131;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_77, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_16;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_34;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    Py_DECREF( locals_cryptography$x509$oid_131 );
    locals_cryptography$x509$oid_131 = NULL;
    goto try_return_handler_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$x509$oid_131 );
    locals_cryptography$x509$oid_131 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 131;
    goto try_except_handler_14;
    outline_result_5:;
    tmp_assign_source_33 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID, tmp_assign_source_33 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_RSA_WITH_MD5 );
    if ( tmp_dict_key_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_dict_key_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 152;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_MD5 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dict_key_1 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_35 = _PyDict_NewPresized( 15 );
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    Py_DECREF( tmp_dict_key_1 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_RSA_WITH_SHA1 );
    if ( tmp_dict_key_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 153;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 153;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 153;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_SHA1 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_2 );

        exception_lineno = 153;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    Py_DECREF( tmp_dict_key_2 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__RSA_WITH_SHA1 );
    if ( tmp_dict_key_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 154;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 154;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 154;
    tmp_dict_value_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_SHA1 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_3 );

        exception_lineno = 154;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    Py_DECREF( tmp_dict_key_3 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_RSA_WITH_SHA224 );
    if ( tmp_dict_key_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 155;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_5 == NULL ))
    {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 155;
    tmp_dict_value_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_SHA224 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_4 );

        exception_lineno = 155;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    Py_DECREF( tmp_dict_key_4 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_RSA_WITH_SHA256 );
    if ( tmp_dict_key_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 156;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_6 == NULL ))
    {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_6 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 156;
    tmp_dict_value_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_SHA256 );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_5 );

        exception_lineno = 156;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    Py_DECREF( tmp_dict_key_5 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_RSA_WITH_SHA384 );
    if ( tmp_dict_key_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 157;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_7 == NULL ))
    {
        tmp_called_instance_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_7 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 157;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 157;
    tmp_dict_value_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_SHA384 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_6 );

        exception_lineno = 157;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    Py_DECREF( tmp_dict_key_6 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_RSA_WITH_SHA512 );
    if ( tmp_dict_key_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 158;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_8 == NULL ))
    {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_8 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 158;
    tmp_dict_value_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_SHA512 );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_7 );

        exception_lineno = 158;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    Py_DECREF( tmp_dict_key_7 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ECDSA_WITH_SHA1 );
    if ( tmp_dict_key_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 159;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_9 == NULL ))
    {
        tmp_called_instance_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_9 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 159;
    tmp_dict_value_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_SHA1 );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_8 );

        exception_lineno = 159;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    Py_DECREF( tmp_dict_key_8 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_ECDSA_WITH_SHA224 );
    if ( tmp_dict_key_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 160;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_10 == NULL ))
    {
        tmp_called_instance_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_10 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 160;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 160;
    tmp_dict_value_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_SHA224 );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_9 );

        exception_lineno = 160;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    Py_DECREF( tmp_dict_key_9 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_ECDSA_WITH_SHA256 );
    if ( tmp_dict_key_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 161;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_11 == NULL ))
    {
        tmp_called_instance_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_11 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 161;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 161;
    tmp_dict_value_10 = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_SHA256 );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_10 );

        exception_lineno = 161;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    Py_DECREF( tmp_dict_key_10 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_ECDSA_WITH_SHA384 );
    if ( tmp_dict_key_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 162;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_12 == NULL ))
    {
        tmp_called_instance_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_12 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 162;
    tmp_dict_value_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_SHA384 );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_11 );

        exception_lineno = 162;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    Py_DECREF( tmp_dict_key_11 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ECDSA_WITH_SHA512 );
    if ( tmp_dict_key_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 163;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_13 == NULL ))
    {
        tmp_called_instance_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_13 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 163;
    tmp_dict_value_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_13, const_str_plain_SHA512 );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_12 );

        exception_lineno = 163;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    Py_DECREF( tmp_dict_key_12 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_13 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_DSA_WITH_SHA1 );
    if ( tmp_dict_key_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 164;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_14 == NULL ))
    {
        tmp_called_instance_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_14 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 164;
    tmp_dict_value_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_14, const_str_plain_SHA1 );
    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_13 );

        exception_lineno = 164;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    Py_DECREF( tmp_dict_key_13 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_19 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_14 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_DSA_WITH_SHA224 );
    if ( tmp_dict_key_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 165;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_15 == NULL ))
    {
        tmp_called_instance_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 165;
    tmp_dict_value_14 = CALL_METHOD_NO_ARGS( tmp_called_instance_15, const_str_plain_SHA224 );
    if ( tmp_dict_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_14 );

        exception_lineno = 165;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_14, tmp_dict_value_14 );
    Py_DECREF( tmp_dict_value_14 );
    Py_DECREF( tmp_dict_key_14 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_15 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_DSA_WITH_SHA256 );
    if ( tmp_dict_key_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 166;

        goto frame_exception_exit_1;
    }
    tmp_called_instance_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_hashes );

    if (unlikely( tmp_called_instance_16 == NULL ))
    {
        tmp_called_instance_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashes );
    }

    if ( tmp_called_instance_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "hashes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 166;

        goto frame_exception_exit_1;
    }

    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 166;
    tmp_dict_value_15 = CALL_METHOD_NO_ARGS( tmp_called_instance_16, const_str_plain_SHA256 );
    if ( tmp_dict_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );
        Py_DECREF( tmp_dict_key_15 );

        exception_lineno = 166;

        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_assign_source_35, tmp_dict_key_15, tmp_dict_value_15 );
    Py_DECREF( tmp_dict_value_15 );
    Py_DECREF( tmp_dict_key_15 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_35 );

        exception_lineno = 152;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain__SIG_OIDS_TO_HASH, tmp_assign_source_35 );
    tmp_assign_source_36 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_36;

    // Tried code:
    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_metaclass_name_6 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_6 != NULL );
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_12:;
    tmp_bases_name_6 = const_tuple_type_object_tuple;
    tmp_assign_source_37 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_37;

    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    tmp_cond_value_13 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    branch_no_6:;
    tmp_hasattr_source_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_6 );
    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_source_name_21 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_21 );
    tmp_called_name_78 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain___prepare__ );
    if ( tmp_called_name_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    tmp_args_name_11 = const_tuple_str_plain_ExtendedKeyUsageOID_tuple_type_object_tuple_tuple;
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 170;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_78, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_78 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_17;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_assign_source_38 = PyDict_New();
    condexpr_end_13:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_38;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$x509$oid_170 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_170, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_19;
    }
    tmp_dictset_value = const_str_plain_ExtendedKeyUsageOID;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_170, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_19;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_53a93e878c9d6c7662b31882a9b0d478_7, codeobj_53a93e878c9d6c7662b31882a9b0d478, module_cryptography$x509$oid, sizeof(void *) );
    frame_53a93e878c9d6c7662b31882a9b0d478_7 = cache_frame_53a93e878c9d6c7662b31882a9b0d478_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53a93e878c9d6c7662b31882a9b0d478_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53a93e878c9d6c7662b31882a9b0d478_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_79 = PyObject_GetItem( locals_cryptography$x509$oid_170, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_79 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_79 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_79 == NULL ))
        {
            tmp_called_name_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_79 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 171;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    frame_53a93e878c9d6c7662b31882a9b0d478_7->m_frame.f_lineno = 171;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_79, &PyTuple_GET_ITEM( const_tuple_str_digest_0376a15beee26a285b06cab589a6a7cd_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_170, const_str_plain_SERVER_AUTH, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_name_80 = PyObject_GetItem( locals_cryptography$x509$oid_170, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_80 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_80 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_80 == NULL ))
        {
            tmp_called_name_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_80 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 172;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    frame_53a93e878c9d6c7662b31882a9b0d478_7->m_frame.f_lineno = 172;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_80, &PyTuple_GET_ITEM( const_tuple_str_digest_87cdc7b3da2a01efa67fc002f5f9e93d_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_170, const_str_plain_CLIENT_AUTH, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_name_81 = PyObject_GetItem( locals_cryptography$x509$oid_170, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_81 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_81 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_81 == NULL ))
        {
            tmp_called_name_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_81 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 173;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    frame_53a93e878c9d6c7662b31882a9b0d478_7->m_frame.f_lineno = 173;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_81, &PyTuple_GET_ITEM( const_tuple_str_digest_ced7dfea6e2ba0f172c63b367fc544eb_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_170, const_str_plain_CODE_SIGNING, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_name_82 = PyObject_GetItem( locals_cryptography$x509$oid_170, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_82 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_82 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_82 == NULL ))
        {
            tmp_called_name_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_82 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 174;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    frame_53a93e878c9d6c7662b31882a9b0d478_7->m_frame.f_lineno = 174;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_82, &PyTuple_GET_ITEM( const_tuple_str_digest_3d2ee337e9731ea21bdde6fb3248081f_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_170, const_str_plain_EMAIL_PROTECTION, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_name_83 = PyObject_GetItem( locals_cryptography$x509$oid_170, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_83 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_83 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_83 == NULL ))
        {
            tmp_called_name_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_83 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 175;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    frame_53a93e878c9d6c7662b31882a9b0d478_7->m_frame.f_lineno = 175;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_83, &PyTuple_GET_ITEM( const_tuple_str_digest_abe352de3ffbaa69a49d347e2acd1e80_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_170, const_str_plain_TIME_STAMPING, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_name_84 = PyObject_GetItem( locals_cryptography$x509$oid_170, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_84 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_84 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_84 == NULL ))
        {
            tmp_called_name_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_84 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 176;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    frame_53a93e878c9d6c7662b31882a9b0d478_7->m_frame.f_lineno = 176;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_84, &PyTuple_GET_ITEM( const_tuple_str_digest_bfabc35e33098bc3bd4a248a68700379_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_170, const_str_plain_OCSP_SIGNING, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_name_85 = PyObject_GetItem( locals_cryptography$x509$oid_170, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_85 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_85 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_85 == NULL ))
        {
            tmp_called_name_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_85 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 177;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    frame_53a93e878c9d6c7662b31882a9b0d478_7->m_frame.f_lineno = 177;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_85, &PyTuple_GET_ITEM( const_tuple_str_digest_42920d8d1815b6383c6613f7be148048_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_170, const_str_plain_ANY_EXTENDED_KEY_USAGE, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53a93e878c9d6c7662b31882a9b0d478_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53a93e878c9d6c7662b31882a9b0d478_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53a93e878c9d6c7662b31882a9b0d478_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53a93e878c9d6c7662b31882a9b0d478_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53a93e878c9d6c7662b31882a9b0d478_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53a93e878c9d6c7662b31882a9b0d478_7,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_53a93e878c9d6c7662b31882a9b0d478_7 == cache_frame_53a93e878c9d6c7662b31882a9b0d478_7 )
    {
        Py_DECREF( frame_53a93e878c9d6c7662b31882a9b0d478_7 );
    }
    cache_frame_53a93e878c9d6c7662b31882a9b0d478_7 = NULL;

    assertFrameObject( frame_53a93e878c9d6c7662b31882a9b0d478_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_19;
    skip_nested_handling_6:;
    tmp_called_name_86 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_86 );
    tmp_tuple_element_6 = const_str_plain_ExtendedKeyUsageOID;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = locals_cryptography$x509$oid_170;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_6 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 170;
    tmp_assign_source_40 = CALL_FUNCTION( tmp_called_name_86, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_19;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_40;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    Py_DECREF( locals_cryptography$x509$oid_170 );
    locals_cryptography$x509$oid_170 = NULL;
    goto try_return_handler_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$x509$oid_170 );
    locals_cryptography$x509$oid_170 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 170;
    goto try_except_handler_17;
    outline_result_6:;
    tmp_assign_source_39 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID, tmp_assign_source_39 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    tmp_assign_source_41 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_41;

    // Tried code:
    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    tmp_cond_value_14 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_metaclass_name_7 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_7 != NULL );
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_14:;
    tmp_bases_name_7 = const_tuple_type_object_tuple;
    tmp_assign_source_42 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    Py_DECREF( tmp_metaclass_name_7 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_42;

    tmp_key_name_21 = const_str_plain_metaclass;
    tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    tmp_cond_value_15 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    branch_no_7:;
    tmp_hasattr_source_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_7 );
    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_source_name_22 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_called_name_87 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
    if ( tmp_called_name_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    tmp_args_name_13 = const_tuple_86f0dc99599489f82a87faea8a06811c_tuple;
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 180;
    tmp_assign_source_43 = CALL_FUNCTION( tmp_called_name_87, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_87 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_20;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_assign_source_43 = PyDict_New();
    condexpr_end_15:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_43;

    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$x509$oid_180 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_180, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_22;
    }
    tmp_dictset_value = const_str_plain_AuthorityInformationAccessOID;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_180, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_22;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_10d02b76d4df16df19cd3d03c2c6911f_8, codeobj_10d02b76d4df16df19cd3d03c2c6911f, module_cryptography$x509$oid, sizeof(void *) );
    frame_10d02b76d4df16df19cd3d03c2c6911f_8 = cache_frame_10d02b76d4df16df19cd3d03c2c6911f_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10d02b76d4df16df19cd3d03c2c6911f_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10d02b76d4df16df19cd3d03c2c6911f_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_88 = PyObject_GetItem( locals_cryptography$x509$oid_180, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_88 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_88 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_88 == NULL ))
        {
            tmp_called_name_88 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_88 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 181;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    frame_10d02b76d4df16df19cd3d03c2c6911f_8->m_frame.f_lineno = 181;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_88, &PyTuple_GET_ITEM( const_tuple_str_digest_07bbedf6f84f3fc5867dc620be5e095a_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_180, const_str_plain_CA_ISSUERS, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_called_name_89 = PyObject_GetItem( locals_cryptography$x509$oid_180, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_89 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_89 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_89 == NULL ))
        {
            tmp_called_name_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_89 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 182;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    frame_10d02b76d4df16df19cd3d03c2c6911f_8->m_frame.f_lineno = 182;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_89, &PyTuple_GET_ITEM( const_tuple_str_digest_2b4acfbf018aa94fa2c4d751377b67ba_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_180, const_str_plain_OCSP, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10d02b76d4df16df19cd3d03c2c6911f_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10d02b76d4df16df19cd3d03c2c6911f_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10d02b76d4df16df19cd3d03c2c6911f_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10d02b76d4df16df19cd3d03c2c6911f_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10d02b76d4df16df19cd3d03c2c6911f_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10d02b76d4df16df19cd3d03c2c6911f_8,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_10d02b76d4df16df19cd3d03c2c6911f_8 == cache_frame_10d02b76d4df16df19cd3d03c2c6911f_8 )
    {
        Py_DECREF( frame_10d02b76d4df16df19cd3d03c2c6911f_8 );
    }
    cache_frame_10d02b76d4df16df19cd3d03c2c6911f_8 = NULL;

    assertFrameObject( frame_10d02b76d4df16df19cd3d03c2c6911f_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_22;
    skip_nested_handling_7:;
    tmp_called_name_90 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_90 );
    tmp_tuple_element_7 = const_str_plain_AuthorityInformationAccessOID;
    tmp_args_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = locals_cryptography$x509$oid_180;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_7 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 180;
    tmp_assign_source_45 = CALL_FUNCTION( tmp_called_name_90, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto try_except_handler_22;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_45;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    Py_DECREF( locals_cryptography$x509$oid_180 );
    locals_cryptography$x509$oid_180 = NULL;
    goto try_return_handler_21;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$x509$oid_180 );
    locals_cryptography$x509$oid_180 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_21;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    goto outline_result_7;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 180;
    goto try_except_handler_20;
    outline_result_7:;
    tmp_assign_source_44 = tmp_outline_return_value_7;
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID, tmp_assign_source_44 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    tmp_assign_source_46 = PyDict_New();
    assert( tmp_class_creation_8__class_decl_dict == NULL );
    tmp_class_creation_8__class_decl_dict = tmp_assign_source_46;

    // Tried code:
    tmp_key_name_22 = const_str_plain_metaclass;
    tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_22 );
    tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    tmp_cond_value_16 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_23 );
    tmp_key_name_23 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_metaclass_name_8 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_8 != NULL );
    Py_INCREF( tmp_metaclass_name_8 );
    condexpr_end_16:;
    tmp_bases_name_8 = const_tuple_type_object_tuple;
    tmp_assign_source_47 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    Py_DECREF( tmp_metaclass_name_8 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_47;

    tmp_key_name_24 = const_str_plain_metaclass;
    tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_24 );
    tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    tmp_cond_value_17 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    branch_no_8:;
    tmp_hasattr_source_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_8 );
    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_source_name_23 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_source_name_23 );
    tmp_called_name_91 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain___prepare__ );
    if ( tmp_called_name_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    tmp_args_name_15 = const_tuple_str_plain_CertificatePoliciesOID_tuple_type_object_tuple_tuple;
    tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_15 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 185;
    tmp_assign_source_48 = CALL_FUNCTION( tmp_called_name_91, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_91 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_23;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_assign_source_48 = PyDict_New();
    condexpr_end_17:;
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_48;

    tmp_set_locals = tmp_class_creation_8__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$x509$oid_185 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_0dcb6991fe0fe1dc113b1f3e65627e35;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_185, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_25;
    }
    tmp_dictset_value = const_str_plain_CertificatePoliciesOID;
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_185, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_25;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_8706214e66a720fa12d0dc004ada394c_9, codeobj_8706214e66a720fa12d0dc004ada394c, module_cryptography$x509$oid, sizeof(void *) );
    frame_8706214e66a720fa12d0dc004ada394c_9 = cache_frame_8706214e66a720fa12d0dc004ada394c_9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8706214e66a720fa12d0dc004ada394c_9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8706214e66a720fa12d0dc004ada394c_9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_92 = PyObject_GetItem( locals_cryptography$x509$oid_185, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_92 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_92 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_92 == NULL ))
        {
            tmp_called_name_92 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_92 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 186;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    frame_8706214e66a720fa12d0dc004ada394c_9->m_frame.f_lineno = 186;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_92, &PyTuple_GET_ITEM( const_tuple_str_digest_50321ff2fccee4024d98999f9c8d9feb_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_185, const_str_plain_CPS_QUALIFIER, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_called_name_93 = PyObject_GetItem( locals_cryptography$x509$oid_185, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_93 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_93 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_93 == NULL ))
        {
            tmp_called_name_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_93 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 187;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    frame_8706214e66a720fa12d0dc004ada394c_9->m_frame.f_lineno = 187;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_93, &PyTuple_GET_ITEM( const_tuple_str_digest_03e57fcfeaffac79e0551f43c9be177f_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_185, const_str_plain_CPS_USER_NOTICE, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_called_name_94 = PyObject_GetItem( locals_cryptography$x509$oid_185, const_str_plain_ObjectIdentifier );

    if ( tmp_called_name_94 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_name_94 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );

        if (unlikely( tmp_called_name_94 == NULL ))
        {
            tmp_called_name_94 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ObjectIdentifier );
        }

        if ( tmp_called_name_94 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ObjectIdentifier" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 188;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    frame_8706214e66a720fa12d0dc004ada394c_9->m_frame.f_lineno = 188;
    tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_94, &PyTuple_GET_ITEM( const_tuple_str_digest_fbb6e1cc86dd0b99c46a7f9000416d62_tuple, 0 ) );

    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$x509$oid_185, const_str_plain_ANY_POLICY, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8706214e66a720fa12d0dc004ada394c_9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;

    frame_exception_exit_9:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8706214e66a720fa12d0dc004ada394c_9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8706214e66a720fa12d0dc004ada394c_9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8706214e66a720fa12d0dc004ada394c_9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8706214e66a720fa12d0dc004ada394c_9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8706214e66a720fa12d0dc004ada394c_9,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_8706214e66a720fa12d0dc004ada394c_9 == cache_frame_8706214e66a720fa12d0dc004ada394c_9 )
    {
        Py_DECREF( frame_8706214e66a720fa12d0dc004ada394c_9 );
    }
    cache_frame_8706214e66a720fa12d0dc004ada394c_9 = NULL;

    assertFrameObject( frame_8706214e66a720fa12d0dc004ada394c_9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_8;

    frame_no_exception_8:;

    goto skip_nested_handling_8;
    nested_frame_exit_8:;

    goto try_except_handler_25;
    skip_nested_handling_8:;
    tmp_called_name_95 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_95 );
    tmp_tuple_element_8 = const_str_plain_CertificatePoliciesOID;
    tmp_args_name_16 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_cryptography$x509$oid_185;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_8 );
    tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_16 );
    frame_bb39115ecdd75e08807811d1ec7276f7->m_frame.f_lineno = 185;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_95, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_25;
    }
    assert( outline_7_var___class__ == NULL );
    outline_7_var___class__ = tmp_assign_source_50;

    tmp_outline_return_value_8 = outline_7_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_8 );
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_25;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_25:;
    Py_DECREF( locals_cryptography$x509$oid_185 );
    locals_cryptography$x509$oid_185 = NULL;
    goto try_return_handler_24;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$x509$oid_185 );
    locals_cryptography$x509$oid_185 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_24;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_24:;
    CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
    Py_DECREF( outline_7_var___class__ );
    outline_7_var___class__ = NULL;

    goto outline_result_8;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$x509$oid );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 185;
    goto try_except_handler_23;
    outline_result_8:;
    tmp_assign_source_49 = tmp_outline_return_value_8;
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID, tmp_assign_source_49 );
    goto try_end_9;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__prepared );
    Py_DECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_16 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_COMMON_NAME );
    if ( tmp_dict_key_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_16 = const_str_plain_commonName;
    tmp_assign_source_51 = _PyDict_NewPresized( 74 );
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_16, tmp_dict_value_16 );
    Py_DECREF( tmp_dict_key_16 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_17 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_COUNTRY_NAME );
    if ( tmp_dict_key_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 193;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_17 = const_str_plain_countryName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_17, tmp_dict_value_17 );
    Py_DECREF( tmp_dict_key_17 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_18 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_LOCALITY_NAME );
    if ( tmp_dict_key_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 194;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_18 = const_str_plain_localityName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_18, tmp_dict_value_18 );
    Py_DECREF( tmp_dict_key_18 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_19 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_STATE_OR_PROVINCE_NAME );
    if ( tmp_dict_key_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 195;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_19 = const_str_plain_stateOrProvinceName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_19, tmp_dict_value_19 );
    Py_DECREF( tmp_dict_key_19 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_28 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_20 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_STREET_ADDRESS );
    if ( tmp_dict_key_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 196;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_20 = const_str_plain_streetAddress;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_20, tmp_dict_value_20 );
    Py_DECREF( tmp_dict_key_20 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_21 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_ORGANIZATION_NAME );
    if ( tmp_dict_key_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 197;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_21 = const_str_plain_organizationName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_21, tmp_dict_value_21 );
    Py_DECREF( tmp_dict_key_21 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_22 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_ORGANIZATIONAL_UNIT_NAME );
    if ( tmp_dict_key_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 198;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_22 = const_str_plain_organizationalUnitName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_22, tmp_dict_value_22 );
    Py_DECREF( tmp_dict_key_22 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_23 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_SERIAL_NUMBER );
    if ( tmp_dict_key_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 199;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_23 = const_str_plain_serialNumber;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_23, tmp_dict_value_23 );
    Py_DECREF( tmp_dict_key_23 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_24 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_SURNAME );
    if ( tmp_dict_key_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 200;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_24 = const_str_plain_surname;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_24, tmp_dict_value_24 );
    Py_DECREF( tmp_dict_key_24 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_25 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_GIVEN_NAME );
    if ( tmp_dict_key_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 201;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_25 = const_str_plain_givenName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_25, tmp_dict_value_25 );
    Py_DECREF( tmp_dict_key_25 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_34 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_26 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_TITLE );
    if ( tmp_dict_key_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 202;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_26 = const_str_plain_title;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_26, tmp_dict_value_26 );
    Py_DECREF( tmp_dict_key_26 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_35 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 203;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_27 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_GENERATION_QUALIFIER );
    if ( tmp_dict_key_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 203;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_27 = const_str_plain_generationQualifier;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_27, tmp_dict_value_27 );
    Py_DECREF( tmp_dict_key_27 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_28 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_X500_UNIQUE_IDENTIFIER );
    if ( tmp_dict_key_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 204;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_28 = const_str_plain_x500UniqueIdentifier;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_28, tmp_dict_value_28 );
    Py_DECREF( tmp_dict_key_28 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_37 == NULL ))
    {
        tmp_source_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_37 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_29 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_DN_QUALIFIER );
    if ( tmp_dict_key_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 205;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_29 = const_str_plain_dnQualifier;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_29, tmp_dict_value_29 );
    Py_DECREF( tmp_dict_key_29 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_38 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_30 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_PSEUDONYM );
    if ( tmp_dict_key_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 206;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_30 = const_str_plain_pseudonym;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_30, tmp_dict_value_30 );
    Py_DECREF( tmp_dict_key_30 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_39 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_31 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_USER_ID );
    if ( tmp_dict_key_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 207;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_31 = const_str_plain_userID;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_31, tmp_dict_value_31 );
    Py_DECREF( tmp_dict_key_31 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_40 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_40 == NULL ))
    {
        tmp_source_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_40 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_32 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_DOMAIN_COMPONENT );
    if ( tmp_dict_key_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 208;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_32 = const_str_plain_domainComponent;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_32, tmp_dict_value_32 );
    Py_DECREF( tmp_dict_key_32 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_41 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_33 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_EMAIL_ADDRESS );
    if ( tmp_dict_key_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 209;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_33 = const_str_plain_emailAddress;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_33, tmp_dict_value_33 );
    Py_DECREF( tmp_dict_key_33 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_42 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_42 == NULL ))
    {
        tmp_source_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_42 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_34 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_JURISDICTION_COUNTRY_NAME );
    if ( tmp_dict_key_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 210;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_34 = const_str_plain_jurisdictionCountryName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_34, tmp_dict_value_34 );
    Py_DECREF( tmp_dict_key_34 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_43 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_43 == NULL ))
    {
        tmp_source_name_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_43 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 211;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_35 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_JURISDICTION_LOCALITY_NAME );
    if ( tmp_dict_key_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 211;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_35 = const_str_plain_jurisdictionLocalityName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_35, tmp_dict_value_35 );
    Py_DECREF( tmp_dict_key_35 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_44 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 212;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_36 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_JURISDICTION_STATE_OR_PROVINCE_NAME );
    if ( tmp_dict_key_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 212;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_36 = const_str_plain_jurisdictionStateOrProvinceName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_36, tmp_dict_value_36 );
    Py_DECREF( tmp_dict_key_36 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_45 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_45 == NULL ))
    {
        tmp_source_name_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_45 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_37 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_BUSINESS_CATEGORY );
    if ( tmp_dict_key_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 215;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_37 = const_str_plain_businessCategory;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_37, tmp_dict_value_37 );
    Py_DECREF( tmp_dict_key_37 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_46 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 216;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_38 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_POSTAL_ADDRESS );
    if ( tmp_dict_key_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 216;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_38 = const_str_plain_postalAddress;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_38, tmp_dict_value_38 );
    Py_DECREF( tmp_dict_key_38 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_47 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_NameOID );

    if (unlikely( tmp_source_name_47 == NULL ))
    {
        tmp_source_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NameOID );
    }

    if ( tmp_source_name_47 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "NameOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 217;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_39 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_POSTAL_CODE );
    if ( tmp_dict_key_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 217;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_39 = const_str_plain_postalCode;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_39, tmp_dict_value_39 );
    Py_DECREF( tmp_dict_key_39 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_48 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_48 == NULL ))
    {
        tmp_source_name_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_48 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 219;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_40 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_RSA_WITH_MD5 );
    if ( tmp_dict_key_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 219;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_40 = const_str_plain_md5WithRSAEncryption;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_40, tmp_dict_value_40 );
    Py_DECREF( tmp_dict_key_40 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_49 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_49 == NULL ))
    {
        tmp_source_name_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_49 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_41 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain_RSA_WITH_SHA1 );
    if ( tmp_dict_key_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 220;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_41 = const_str_plain_sha1WithRSAEncryption;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_41, tmp_dict_value_41 );
    Py_DECREF( tmp_dict_key_41 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_50 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_50 == NULL ))
    {
        tmp_source_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_50 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 221;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_42 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_RSA_WITH_SHA224 );
    if ( tmp_dict_key_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 221;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_42 = const_str_plain_sha224WithRSAEncryption;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_42, tmp_dict_value_42 );
    Py_DECREF( tmp_dict_key_42 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_51 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_51 == NULL ))
    {
        tmp_source_name_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_51 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 222;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_43 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain_RSA_WITH_SHA256 );
    if ( tmp_dict_key_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 222;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_43 = const_str_plain_sha256WithRSAEncryption;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_43, tmp_dict_value_43 );
    Py_DECREF( tmp_dict_key_43 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_52 == NULL ))
    {
        tmp_source_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_52 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_44 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_RSA_WITH_SHA384 );
    if ( tmp_dict_key_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 223;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_44 = const_str_plain_sha384WithRSAEncryption;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_44, tmp_dict_value_44 );
    Py_DECREF( tmp_dict_key_44 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_53 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_53 == NULL ))
    {
        tmp_source_name_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_53 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_45 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain_RSA_WITH_SHA512 );
    if ( tmp_dict_key_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 224;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_45 = const_str_plain_sha512WithRSAEncryption;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_45, tmp_dict_value_45 );
    Py_DECREF( tmp_dict_key_45 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_54 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_54 == NULL ))
    {
        tmp_source_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_54 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_46 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_RSASSA_PSS );
    if ( tmp_dict_key_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 225;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_46 = const_str_digest_10a263591d80ff02d463da6ebd05548d;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_46, tmp_dict_value_46 );
    Py_DECREF( tmp_dict_key_46 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_55 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_55 == NULL ))
    {
        tmp_source_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_55 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_47 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_ECDSA_WITH_SHA1 );
    if ( tmp_dict_key_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 226;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_47 = const_str_digest_c2fb55a1f09e586fc82a97de6fc73acc;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_47, tmp_dict_value_47 );
    Py_DECREF( tmp_dict_key_47 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_56 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_56 == NULL ))
    {
        tmp_source_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_56 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 227;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_48 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_ECDSA_WITH_SHA224 );
    if ( tmp_dict_key_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 227;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_48 = const_str_digest_557b29feaadb5ada1ad965906e5d1dd3;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_48, tmp_dict_value_48 );
    Py_DECREF( tmp_dict_key_48 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_57 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_57 == NULL ))
    {
        tmp_source_name_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_57 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_49 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_ECDSA_WITH_SHA256 );
    if ( tmp_dict_key_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 228;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_49 = const_str_digest_ad3c682658ab1bc2f4342a30cc4996e2;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_49, tmp_dict_value_49 );
    Py_DECREF( tmp_dict_key_49 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_58 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_58 == NULL ))
    {
        tmp_source_name_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_58 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 229;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_50 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_ECDSA_WITH_SHA384 );
    if ( tmp_dict_key_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 229;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_50 = const_str_digest_ff3f390793cb3f7a65e3ba0d8b30034e;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_50, tmp_dict_value_50 );
    Py_DECREF( tmp_dict_key_50 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_59 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_59 == NULL ))
    {
        tmp_source_name_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_59 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_51 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_ECDSA_WITH_SHA512 );
    if ( tmp_dict_key_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 230;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_51 = const_str_digest_8c168ca0bdafd4e71f4b6bf87eb46ded;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_51, tmp_dict_value_51 );
    Py_DECREF( tmp_dict_key_51 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_60 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_60 == NULL ))
    {
        tmp_source_name_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_60 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_52 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_DSA_WITH_SHA1 );
    if ( tmp_dict_key_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 231;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_52 = const_str_digest_17ca6fd46f3d026f6114676b663f8acd;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_52, tmp_dict_value_52 );
    Py_DECREF( tmp_dict_key_52 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_61 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_61 == NULL ))
    {
        tmp_source_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_61 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 232;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_53 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_DSA_WITH_SHA224 );
    if ( tmp_dict_key_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 232;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_53 = const_str_digest_3df3ca64dd8761c027ed0ba43961e89a;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_53, tmp_dict_value_53 );
    Py_DECREF( tmp_dict_key_53 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_62 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );

    if (unlikely( tmp_source_name_62 == NULL ))
    {
        tmp_source_name_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SignatureAlgorithmOID );
    }

    if ( tmp_source_name_62 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SignatureAlgorithmOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_54 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_DSA_WITH_SHA256 );
    if ( tmp_dict_key_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 233;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_54 = const_str_digest_a0b774c3e9788e9c20a69f9b798eb899;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_54, tmp_dict_value_54 );
    Py_DECREF( tmp_dict_key_54 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_63 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );

    if (unlikely( tmp_source_name_63 == NULL ))
    {
        tmp_source_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );
    }

    if ( tmp_source_name_63 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtendedKeyUsageOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_55 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_SERVER_AUTH );
    if ( tmp_dict_key_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 234;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_55 = const_str_plain_serverAuth;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_55, tmp_dict_value_55 );
    Py_DECREF( tmp_dict_key_55 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_64 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );

    if (unlikely( tmp_source_name_64 == NULL ))
    {
        tmp_source_name_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );
    }

    if ( tmp_source_name_64 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtendedKeyUsageOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_56 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_CLIENT_AUTH );
    if ( tmp_dict_key_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 235;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_56 = const_str_plain_clientAuth;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_56, tmp_dict_value_56 );
    Py_DECREF( tmp_dict_key_56 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_65 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );

    if (unlikely( tmp_source_name_65 == NULL ))
    {
        tmp_source_name_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );
    }

    if ( tmp_source_name_65 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtendedKeyUsageOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_57 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_CODE_SIGNING );
    if ( tmp_dict_key_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 236;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_57 = const_str_plain_codeSigning;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_57, tmp_dict_value_57 );
    Py_DECREF( tmp_dict_key_57 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_66 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );

    if (unlikely( tmp_source_name_66 == NULL ))
    {
        tmp_source_name_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );
    }

    if ( tmp_source_name_66 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtendedKeyUsageOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 237;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_58 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_EMAIL_PROTECTION );
    if ( tmp_dict_key_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 237;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_58 = const_str_plain_emailProtection;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_58, tmp_dict_value_58 );
    Py_DECREF( tmp_dict_key_58 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_67 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );

    if (unlikely( tmp_source_name_67 == NULL ))
    {
        tmp_source_name_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );
    }

    if ( tmp_source_name_67 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtendedKeyUsageOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_59 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_TIME_STAMPING );
    if ( tmp_dict_key_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 238;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_59 = const_str_plain_timeStamping;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_59, tmp_dict_value_59 );
    Py_DECREF( tmp_dict_key_59 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_68 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );

    if (unlikely( tmp_source_name_68 == NULL ))
    {
        tmp_source_name_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtendedKeyUsageOID );
    }

    if ( tmp_source_name_68 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtendedKeyUsageOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_60 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_OCSP_SIGNING );
    if ( tmp_dict_key_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 239;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_60 = const_str_plain_OCSPSigning;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_60, tmp_dict_value_60 );
    Py_DECREF( tmp_dict_key_60 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_69 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_69 == NULL ))
    {
        tmp_source_name_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_69 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 240;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_61 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_SUBJECT_DIRECTORY_ATTRIBUTES );
    if ( tmp_dict_key_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 240;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_61 = const_str_plain_subjectDirectoryAttributes;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_61, tmp_dict_value_61 );
    Py_DECREF( tmp_dict_key_61 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_70 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_70 == NULL ))
    {
        tmp_source_name_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_70 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_62 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_SUBJECT_KEY_IDENTIFIER );
    if ( tmp_dict_key_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 241;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_62 = const_str_plain_subjectKeyIdentifier;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_62, tmp_dict_value_62 );
    Py_DECREF( tmp_dict_key_62 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_71 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_71 == NULL ))
    {
        tmp_source_name_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_71 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_63 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_KEY_USAGE );
    if ( tmp_dict_key_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 242;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_63 = const_str_plain_keyUsage;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_63, tmp_dict_value_63 );
    Py_DECREF( tmp_dict_key_63 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_72 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_72 == NULL ))
    {
        tmp_source_name_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_72 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_64 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_SUBJECT_ALTERNATIVE_NAME );
    if ( tmp_dict_key_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 243;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_64 = const_str_plain_subjectAltName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_64, tmp_dict_value_64 );
    Py_DECREF( tmp_dict_key_64 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_73 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_73 == NULL ))
    {
        tmp_source_name_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_73 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 244;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_65 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_ISSUER_ALTERNATIVE_NAME );
    if ( tmp_dict_key_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 244;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_65 = const_str_plain_issuerAltName;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_65, tmp_dict_value_65 );
    Py_DECREF( tmp_dict_key_65 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_74 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_74 == NULL ))
    {
        tmp_source_name_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_74 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 245;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_66 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_BASIC_CONSTRAINTS );
    if ( tmp_dict_key_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 245;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_66 = const_str_plain_basicConstraints;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_66, tmp_dict_value_66 );
    Py_DECREF( tmp_dict_key_66 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_75 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_75 == NULL ))
    {
        tmp_source_name_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_75 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_67 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_PRECERT_SIGNED_CERTIFICATE_TIMESTAMPS );
    if ( tmp_dict_key_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 246;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_67 = const_str_plain_signedCertificateTimestampList;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_67, tmp_dict_value_67 );
    Py_DECREF( tmp_dict_key_67 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_76 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID );

    if (unlikely( tmp_source_name_76 == NULL ))
    {
        tmp_source_name_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID );
    }

    if ( tmp_source_name_76 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CRLEntryExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_68 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_CRL_REASON );
    if ( tmp_dict_key_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 249;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_68 = const_str_plain_cRLReason;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_68, tmp_dict_value_68 );
    Py_DECREF( tmp_dict_key_68 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_77 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID );

    if (unlikely( tmp_source_name_77 == NULL ))
    {
        tmp_source_name_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID );
    }

    if ( tmp_source_name_77 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CRLEntryExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 250;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_69 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_INVALIDITY_DATE );
    if ( tmp_dict_key_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 250;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_69 = const_str_plain_invalidityDate;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_69, tmp_dict_value_69 );
    Py_DECREF( tmp_dict_key_69 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_78 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID );

    if (unlikely( tmp_source_name_78 == NULL ))
    {
        tmp_source_name_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CRLEntryExtensionOID );
    }

    if ( tmp_source_name_78 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CRLEntryExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_70 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_CERTIFICATE_ISSUER );
    if ( tmp_dict_key_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 251;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_70 = const_str_plain_certificateIssuer;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_70, tmp_dict_value_70 );
    Py_DECREF( tmp_dict_key_70 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_79 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_79 == NULL ))
    {
        tmp_source_name_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_79 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 252;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_71 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_NAME_CONSTRAINTS );
    if ( tmp_dict_key_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 252;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_71 = const_str_plain_nameConstraints;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_71, tmp_dict_value_71 );
    Py_DECREF( tmp_dict_key_71 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_80 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_80 == NULL ))
    {
        tmp_source_name_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_80 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_72 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_CRL_DISTRIBUTION_POINTS );
    if ( tmp_dict_key_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 253;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_72 = const_str_plain_cRLDistributionPoints;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_72, tmp_dict_value_72 );
    Py_DECREF( tmp_dict_key_72 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_81 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_81 == NULL ))
    {
        tmp_source_name_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_81 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 254;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_73 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_CERTIFICATE_POLICIES );
    if ( tmp_dict_key_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 254;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_73 = const_str_plain_certificatePolicies;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_73, tmp_dict_value_73 );
    Py_DECREF( tmp_dict_key_73 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_82 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_82 == NULL ))
    {
        tmp_source_name_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_82 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 255;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_74 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_POLICY_MAPPINGS );
    if ( tmp_dict_key_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 255;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_74 = const_str_plain_policyMappings;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_74, tmp_dict_value_74 );
    Py_DECREF( tmp_dict_key_74 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_83 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_83 == NULL ))
    {
        tmp_source_name_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_83 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_75 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_AUTHORITY_KEY_IDENTIFIER );
    if ( tmp_dict_key_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 256;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_75 = const_str_plain_authorityKeyIdentifier;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_75, tmp_dict_value_75 );
    Py_DECREF( tmp_dict_key_75 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_84 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_84 == NULL ))
    {
        tmp_source_name_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_84 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 257;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_76 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_POLICY_CONSTRAINTS );
    if ( tmp_dict_key_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 257;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_76 = const_str_plain_policyConstraints;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_76, tmp_dict_value_76 );
    Py_DECREF( tmp_dict_key_76 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_85 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_85 == NULL ))
    {
        tmp_source_name_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_85 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_77 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_EXTENDED_KEY_USAGE );
    if ( tmp_dict_key_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 258;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_77 = const_str_plain_extendedKeyUsage;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_77, tmp_dict_value_77 );
    Py_DECREF( tmp_dict_key_77 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_86 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_86 == NULL ))
    {
        tmp_source_name_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_86 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 259;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_78 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_FRESHEST_CRL );
    if ( tmp_dict_key_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 259;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_78 = const_str_plain_freshestCRL;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_78, tmp_dict_value_78 );
    Py_DECREF( tmp_dict_key_78 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_87 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_87 == NULL ))
    {
        tmp_source_name_87 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_87 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 260;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_79 = LOOKUP_ATTRIBUTE( tmp_source_name_87, const_str_plain_INHIBIT_ANY_POLICY );
    if ( tmp_dict_key_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 260;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_79 = const_str_plain_inhibitAnyPolicy;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_79, tmp_dict_value_79 );
    Py_DECREF( tmp_dict_key_79 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_88 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_88 == NULL ))
    {
        tmp_source_name_88 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_88 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_80 = LOOKUP_ATTRIBUTE( tmp_source_name_88, const_str_plain_AUTHORITY_INFORMATION_ACCESS );
    if ( tmp_dict_key_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 261;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_80 = const_str_plain_authorityInfoAccess;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_80, tmp_dict_value_80 );
    Py_DECREF( tmp_dict_key_80 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_89 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_89 == NULL ))
    {
        tmp_source_name_89 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_89 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 262;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_81 = LOOKUP_ATTRIBUTE( tmp_source_name_89, const_str_plain_SUBJECT_INFORMATION_ACCESS );
    if ( tmp_dict_key_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 262;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_81 = const_str_plain_subjectInfoAccess;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_81, tmp_dict_value_81 );
    Py_DECREF( tmp_dict_key_81 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_90 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_90 == NULL ))
    {
        tmp_source_name_90 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_90 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_82 = LOOKUP_ATTRIBUTE( tmp_source_name_90, const_str_plain_OCSP_NO_CHECK );
    if ( tmp_dict_key_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 263;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_82 = const_str_plain_OCSPNoCheck;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_82, tmp_dict_value_82 );
    Py_DECREF( tmp_dict_key_82 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_91 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_91 == NULL ))
    {
        tmp_source_name_91 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_91 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_83 = LOOKUP_ATTRIBUTE( tmp_source_name_91, const_str_plain_CRL_NUMBER );
    if ( tmp_dict_key_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 264;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_83 = const_str_plain_cRLNumber;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_83, tmp_dict_value_83 );
    Py_DECREF( tmp_dict_key_83 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_92 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_92 == NULL ))
    {
        tmp_source_name_92 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_92 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_84 = LOOKUP_ATTRIBUTE( tmp_source_name_92, const_str_plain_DELTA_CRL_INDICATOR );
    if ( tmp_dict_key_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 265;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_84 = const_str_plain_deltaCRLIndicator;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_84, tmp_dict_value_84 );
    Py_DECREF( tmp_dict_key_84 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_93 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_ExtensionOID );

    if (unlikely( tmp_source_name_93 == NULL ))
    {
        tmp_source_name_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ExtensionOID );
    }

    if ( tmp_source_name_93 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ExtensionOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_85 = LOOKUP_ATTRIBUTE( tmp_source_name_93, const_str_plain_TLS_FEATURE );
    if ( tmp_dict_key_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 266;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_85 = const_str_plain_TLSFeature;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_85, tmp_dict_value_85 );
    Py_DECREF( tmp_dict_key_85 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_94 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID );

    if (unlikely( tmp_source_name_94 == NULL ))
    {
        tmp_source_name_94 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID );
    }

    if ( tmp_source_name_94 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AuthorityInformationAccessOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 267;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_86 = LOOKUP_ATTRIBUTE( tmp_source_name_94, const_str_plain_OCSP );
    if ( tmp_dict_key_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 267;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_86 = const_str_plain_OCSP;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_86, tmp_dict_value_86 );
    Py_DECREF( tmp_dict_key_86 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_95 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID );

    if (unlikely( tmp_source_name_95 == NULL ))
    {
        tmp_source_name_95 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthorityInformationAccessOID );
    }

    if ( tmp_source_name_95 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "AuthorityInformationAccessOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 268;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_87 = LOOKUP_ATTRIBUTE( tmp_source_name_95, const_str_plain_CA_ISSUERS );
    if ( tmp_dict_key_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 268;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_87 = const_str_plain_caIssuers;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_87, tmp_dict_value_87 );
    Py_DECREF( tmp_dict_key_87 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_96 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID );

    if (unlikely( tmp_source_name_96 == NULL ))
    {
        tmp_source_name_96 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID );
    }

    if ( tmp_source_name_96 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificatePoliciesOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_88 = LOOKUP_ATTRIBUTE( tmp_source_name_96, const_str_plain_CPS_QUALIFIER );
    if ( tmp_dict_key_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 269;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_88 = const_str_digest_f452289eeaecab0c5424fd5ec7db97f7;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_88, tmp_dict_value_88 );
    Py_DECREF( tmp_dict_key_88 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    tmp_source_name_97 = GET_STRING_DICT_VALUE( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID );

    if (unlikely( tmp_source_name_97 == NULL ))
    {
        tmp_source_name_97 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificatePoliciesOID );
    }

    if ( tmp_source_name_97 == NULL )
    {
        Py_DECREF( tmp_assign_source_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CertificatePoliciesOID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;

        goto frame_exception_exit_1;
    }

    tmp_dict_key_89 = LOOKUP_ATTRIBUTE( tmp_source_name_97, const_str_plain_CPS_USER_NOTICE );
    if ( tmp_dict_key_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 270;

        goto frame_exception_exit_1;
    }
    tmp_dict_value_89 = const_str_digest_e13ae27d769f6d1d70b1707fbd3f347b;
    tmp_res = PyDict_SetItem( tmp_assign_source_51, tmp_dict_key_89, tmp_dict_value_89 );
    Py_DECREF( tmp_dict_key_89 );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_51 );

        exception_lineno = 192;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$x509$oid, (Nuitka_StringObject *)const_str_plain__OID_NAMES, tmp_assign_source_51 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb39115ecdd75e08807811d1ec7276f7 );
#endif
    popFrameStack();

    assertFrameObject( frame_bb39115ecdd75e08807811d1ec7276f7 );

    goto frame_no_exception_9;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bb39115ecdd75e08807811d1ec7276f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bb39115ecdd75e08807811d1ec7276f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bb39115ecdd75e08807811d1ec7276f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bb39115ecdd75e08807811d1ec7276f7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_9:;

    return MOD_RETURN_VALUE( module_cryptography$x509$oid );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
