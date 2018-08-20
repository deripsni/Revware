/* Generated code for Python source for module 'cryptography.hazmat.backends.interfaces'
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

/* The _module_cryptography$hazmat$backends$interfaces is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_cryptography$hazmat$backends$interfaces;
PyDictObject *moduledict_cryptography$hazmat$backends$interfaces;

/* The module constants used, if any. */
static PyObject *const_str_digest_d65ea6744de02ec30f1a7b3161ba6680;
static PyObject *const_str_digest_fcac789749766281ae7df79b06104ed5;
static PyObject *const_str_digest_53a083a9ba6ba623d9ca1da980ff8f59;
extern PyObject *const_str_plain_create_x509_certificate;
extern PyObject *const_tuple_str_plain_self_str_plain_padding_tuple;
static PyObject *const_str_digest_e05d2a8640d15d821ac8931cff3ceeb6;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_digest_a07055728045b591bf983a61871792e6;
static PyObject *const_str_digest_33d76b6766d04126d26b70e9574220c1;
static PyObject *const_str_digest_c7251c4b455903e91a75d8e4d6a9b2de;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_HashBackend;
extern PyObject *const_str_plain_public_exponent;
static PyObject *const_str_digest_81516a1ff2b57afcf142bb8cd8e4cf4b;
extern PyObject *const_str_plain_load_pem_parameters;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_RSABackend;
extern PyObject *const_str_plain_X509Backend;
extern PyObject *const_str_plain_dsa_parameters_supported;
static PyObject *const_str_digest_33b1b14451d03f361add6297947e995c;
static PyObject *const_tuple_str_plain_self_str_plain_parameters_tuple;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_hmac_supported;
extern PyObject *const_str_plain_CipherBackend;
static PyObject *const_tuple_str_plain_self_str_plain_builder_tuple;
extern PyObject *const_str_plain_load_rsa_private_numbers;
static PyObject *const_str_digest_18510f252a61499a948652382e1faf94;
static PyObject *const_str_digest_ea519da6621b2e6e31eb85b5c326163a;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_be2baefacd213848c3218d58e5337d00;
static PyObject *const_tuple_str_plain_ScryptBackend_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_PEMSerializationBackend;
extern PyObject *const_str_plain_generate_dh_private_key;
static PyObject *const_str_digest_4d1cd79c69148c2c65a70d73a3298974;
extern PyObject *const_str_plain_load_der_private_key;
static PyObject *const_str_digest_f3b571290b0071f85349aa1e98deefa1;
extern PyObject *const_str_plain_mode;
extern PyObject *const_str_plain_cmac_algorithm_supported;
extern PyObject *const_str_plain_derive_elliptic_curve_private_key;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_DERSerializationBackend;
extern PyObject *const_str_plain_abstractmethod;
static PyObject *const_str_digest_5821e221916481c3f38394f7778eebff;
extern PyObject *const_str_plain_load_pem_private_key;
extern PyObject *const_str_plain_load_der_parameters;
static PyObject *const_str_digest_c0bf5d81d20e7eb0288d1c3ad78eeb28;
static PyObject *const_str_digest_7990d9b2c5d411ebc0586c15e0582def;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_cipher;
static PyObject *const_tuple_str_plain_self_str_plain_key_size_tuple;
static PyObject *const_str_digest_33d14a975b19066b138ce5eafd89cff9;
static PyObject *const_str_digest_8e914904ff9e228505332d098348b4f9;
extern PyObject *const_str_plain_builder;
extern PyObject *const_str_plain_algorithm;
extern PyObject *const_str_plain_load_dh_public_numbers;
static PyObject *const_tuple_str_plain_self_str_plain_curve_tuple;
static PyObject *const_str_digest_ddc4b6aa46809460a2e0c38829ca8bd3;
static PyObject *const_str_digest_ecf7cddfdd7dec8b835d1f188834882c;
static PyObject *const_str_digest_e5bb0ce7e7381f786f9677c69b442e65;
static PyObject *const_str_digest_dc1c83583d36fa154969d46c16a00fa5;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_84a9b90f7e986466b5f551b58b5724d7;
static PyObject *const_str_digest_58bcce40198f92624c1420d024d9e742;
static PyObject *const_str_digest_d3af1ae38ce39ea25482b1b131316438;
extern PyObject *const_tuple_str_plain_self_str_plain_public_exponent_str_plain_key_size_tuple;
static PyObject *const_str_digest_a7328ecdb816372bec3cb1ca678a22bb;
extern PyObject *const_str_plain_generate_dsa_private_key_and_parameters;
static PyObject *const_str_digest_4b453a137c85819b12357ec23de919e0;
static PyObject *const_str_digest_a25814a7003287ed48ae69a3e2c8571e;
extern PyObject *const_str_plain_load_dsa_public_numbers;
extern PyObject *const_str_plain_load_pem_public_key;
static PyObject *const_str_digest_25517886b3a6e05088fb43990d2543ca;
static PyObject *const_str_digest_a5ec310bffa4b7282e6e990718c639b5;
static PyObject *const_str_digest_bfd8b0fb9948f86400e1f7813c12d1ab;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_digest_624798dd704a8f07276d3e75153a7c4b;
static PyObject *const_str_digest_a4c797d45dd48ad8578fe46499751f24;
static PyObject *const_str_digest_9b3ba72a7d95da27c8479268a79874ec;
extern PyObject *const_str_plain_padding;
static PyObject *const_str_digest_692d8108005f88d96ef98564f6598985;
extern PyObject *const_str_plain_load_der_x509_csr;
static PyObject *const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_str_plain_X509Backend_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_ff481c86ef7f2574959a6704954fc569;
static PyObject *const_str_digest_fe72ce46d6560c2e8fe1174440f925b8;
extern PyObject *const_tuple_str_plain_self_str_plain_p_str_plain_g_str_plain_q_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_generate_elliptic_curve_private_key;
extern PyObject *const_tuple_str_plain_self_str_plain_algorithm_tuple;
static PyObject *const_str_digest_4c0fc62fa075fc302d7e12cdc2b1a3c6;
static PyObject *const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple;
extern PyObject *const_str_plain_p;
static PyObject *const_tuple_str_plain_RSABackend_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_parameters;
extern PyObject *const_str_plain_x509_name_bytes;
static PyObject *const_str_digest_4d12925bf986a554565ceebc784606e4;
extern PyObject *const_str_plain_elliptic_curve_supported;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_digest_12bf30ea148596af8b3db51961b172df;
static PyObject *const_tuple_str_plain_DHBackend_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_ScryptBackend;
static PyObject *const_str_digest_b96d5df8801041201634c50a0b42cbf8;
extern PyObject *const_str_plain_DSABackend;
extern PyObject *const_str_plain_DHBackend;
static PyObject *const_str_digest_3be54078b9bd767d7e0767b5226c3e60;
extern PyObject *const_str_plain_load_der_x509_certificate;
static PyObject *const_str_digest_ae098508dd4bf88f8bb4a07250bc5a8b;
static PyObject *const_tuple_str_plain_DSABackend_tuple_type_object_tuple_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_HashBackend_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_generator;
static PyObject *const_str_digest_9a2a007b90c3edace6388a2db0d2942e;
extern PyObject *const_str_plain_numbers;
static PyObject *const_str_digest_9d40568e0a0973abf5fe84776e9bb1b7;
extern PyObject *const_str_plain_generate_rsa_parameters_supported;
static PyObject *const_str_digest_6314fa7c6fc48e2b2c8702ed369f8da8;
extern PyObject *const_str_plain_load_der_public_key;
static PyObject *const_str_digest_71f31f6c62b756a0153edb43b508ea72;
extern PyObject *const_str_plain_curve;
extern PyObject *const_str_digest_19dba398fcfd0968a3203d943a394d68;
static PyObject *const_str_digest_e9c17f9e6a2cfa9137494e7cce4ddb68;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_generate_dh_parameters;
static PyObject *const_str_digest_91cef7da9413817b1df5f9f543c1b117;
extern PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_password_tuple;
extern PyObject *const_str_plain_derive_pbkdf2_hmac;
static PyObject *const_str_digest_e4a6caad51a69cf6559e60044f2d3dbd;
extern PyObject *const_str_plain_salt;
static PyObject *const_str_digest_6f04a0ccb7544097cd875c7c31834e6f;
extern PyObject *const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple;
extern PyObject *const_str_plain_create_symmetric_encryption_ctx;
static PyObject *const_str_digest_7057df53c8250756158e4b05409a0193;
extern PyObject *const_str_plain_EllipticCurveBackend;
extern PyObject *const_str_plain_create_cmac_ctx;
static PyObject *const_str_digest_8184e067c7b3318913c3d0af6b23b2b9;
extern PyObject *const_str_plain_create_hmac_ctx;
extern PyObject *const_str_plain_load_dsa_private_numbers;
static PyObject *const_str_digest_4a6ebccb61a3ed6f4d87c5a399d52376;
static PyObject *const_str_digest_f12949b495741f5c79c5f42f6c102606;
static PyObject *const_tuple_str_plain_PEMSerializationBackend_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_c41f2130b43138f1ac622def55e7960d;
extern PyObject *const_str_plain_key_material;
static PyObject *const_str_digest_6e975c3005ce9d0aac9bd88f7910c3da;
static PyObject *const_str_digest_b05edecec0692327d113db121c176a41;
extern PyObject *const_str_plain_create_symmetric_decryption_ctx;
extern PyObject *const_str_plain_load_dh_private_numbers;
static PyObject *const_str_digest_39ea98a078b45b6c442185503b966df2;
static PyObject *const_str_digest_2a51df9642a3dcdb589c8f1b9733a429;
extern PyObject *const_tuple_str_plain_self_str_plain_p_str_plain_q_str_plain_g_tuple;
extern PyObject *const_str_plain_CMACBackend;
static PyObject *const_tuple_63f249e20181d69efd847aace0409a8e_tuple;
extern PyObject *const_int_0;
static PyObject *const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple;
static PyObject *const_str_digest_bf0e2122a539f658a48bcef89877d604;
static PyObject *const_str_digest_292e56cfdf0067098a88b361e7526e04;
extern PyObject *const_str_plain_load_dsa_parameter_numbers;
extern PyObject *const_str_plain_iterations;
extern PyObject *const_str_plain_generate_rsa_private_key;
static PyObject *const_str_digest_838ca9b3bd6417f22d1fd7753d4ca9b0;
extern PyObject *const_str_plain_load_elliptic_curve_private_numbers;
extern PyObject *const_str_plain_generate_dh_private_key_and_parameters;
extern PyObject *const_str_plain_ABCMeta;
static PyObject *const_str_digest_3efa1d11c5d8421580b0e5c4821ccde0;
extern PyObject *const_str_plain_create_x509_crl;
extern PyObject *const_str_plain_pbkdf2_hmac_supported;
extern PyObject *const_str_plain_load_rsa_public_numbers;
extern PyObject *const_str_plain_cipher_supported;
extern PyObject *const_str_plain_dsa_hash_supported;
static PyObject *const_str_digest_4ac388cc3596594b9fd1573ef2539537;
extern PyObject *const_str_plain_generate_dsa_parameters;
extern PyObject *const_tuple_str_plain_self_str_plain_name_tuple;
extern PyObject *const_str_plain_signature_algorithm;
extern PyObject *const_str_plain_length;
static PyObject *const_str_digest_d5feef865a5be1439d94f255821ef2c1;
static PyObject *const_str_digest_2f9695857620d6d2233ed0e7e24be4e6;
extern PyObject *const_str_plain_derive_scrypt;
static PyObject *const_str_digest_a37049685fe61ee43f425ff3884244a8;
static PyObject *const_str_digest_d5ab83d9695f4da166c2e74669073e5a;
static PyObject *const_str_digest_3552c2706bf0622b7fcc4e5c6e7975ed;
extern PyObject *const_str_plain_rsa_padding_supported;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_c67aac6a6dd9a1db09eb5b9767b70312;
static PyObject *const_str_digest_7a29ddf50f809e8e31a40c49159f32a5;
static PyObject *const_str_digest_36f46d30012dfac1478e9cc097486be1;
extern PyObject *const_str_plain_HMACBackend;
extern PyObject *const_str_plain_create_hash_ctx;
static PyObject *const_str_digest_e6c0eefbbb76d67db8004781dbb68b06;
static PyObject *const_str_digest_c05e2b69d027322920a7d95b35b10126;
extern PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_algorithm_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_f766d6a9c4464307c0995d1178cc0bba;
static PyObject *const_str_digest_e908e8afe1a83e928d0bef8e329dc68a;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3;
extern PyObject *const_str_plain_load_elliptic_curve_public_numbers;
static PyObject *const_str_digest_e2f41cda08e5fbeb088609dad0cd6bf1;
extern PyObject *const_str_plain___class__;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_generate_dsa_private_key;
static PyObject *const_str_digest_da416487c64439c0b905a36ebebfdd99;
extern PyObject *const_str_plain_dh_x942_serialization_supported;
static PyObject *const_tuple_str_plain_HMACBackend_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_411702a9298f3a6580481a55ab9b9a26;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_password;
static PyObject *const_tuple_str_plain_CipherBackend_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_cad1312c0a8ed12faaeb2b2356b3f42c;
static PyObject *const_str_digest_1fd991e1ec7a538f20fe33eb5a63c23a;
static PyObject *const_str_digest_897500164945828209e283a28aa61aa3;
static PyObject *const_str_digest_7b42f6a1029a280baccadb6ba9d7ebc2;
extern PyObject *const_str_plain_key_size;
static PyObject *const_str_digest_df210813cecf8d389a6a11cbd910135b;
static PyObject *const_str_digest_79acb9468fa8327dea48007c163727a0;
extern PyObject *const_tuple_str_plain_self_str_plain_generator_str_plain_key_size_tuple;
static PyObject *const_str_digest_eadb4ee42e8556a29a0e4480e7acc57b;
static PyObject *const_str_digest_e33630e0c38bffcff23972e2969cd960;
static PyObject *const_str_digest_2112a33833bf0835d01f85452f1ef017;
static PyObject *const_str_digest_802d8f8fd7de6f6609d7f954c8f40bf6;
extern PyObject *const_str_plain_add_metaclass;
extern PyObject *const_str_plain_load_dh_parameter_numbers;
extern PyObject *const_str_plain_private_key;
extern PyObject *const_str_plain_key;
static PyObject *const_str_digest_61a0b13c29d14e60d13e27fe3fcabb7d;
static PyObject *const_tuple_str_plain_EllipticCurveBackend_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain_PBKDF2HMACBackend;
static PyObject *const_str_digest_d57a4d29065ab4a1f221ca9cc91f876b;
static PyObject *const_str_digest_7f30278a4fcb72c48b5cd4ea5d079914;
static PyObject *const_tuple_str_plain_CMACBackend_tuple_type_object_tuple_tuple;
extern PyObject *const_str_plain___prepare__;
static PyObject *const_str_digest_d7343ee22e2272ac73afb381205bd004;
static PyObject *const_str_digest_1106e8ed4afc99c4f9cf66a63d4e426d;
static PyObject *const_str_digest_36ba26e04775ce62acc2dcd612c29d46;
extern PyObject *const_tuple_str_plain_self_str_plain_data_tuple;
static PyObject *const_str_digest_06e3225334eb391348195f4973a16cbd;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_hash_supported;
static PyObject *const_str_digest_d9e232185946daeca898e40c39f68e36;
extern PyObject *const_str_plain_load_pem_x509_csr;
static PyObject *const_str_digest_28f4468d6c9734e18c72bd5ca6760f2c;
static PyObject *const_tuple_str_plain_self_str_plain_numbers_tuple;
static PyObject *const_str_digest_f0e494b50e5b866fcff26cb8f400c7a1;
static PyObject *const_str_digest_7186644563a7611ac1bbe89086ad0390;
static PyObject *const_tuple_str_plain_DERSerializationBackend_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_6a83a3310dae744ebfd328dac16db727;
static PyObject *const_str_digest_844858cfc3f176cb25cb563fa156777b;
static PyObject *const_str_digest_f4449f1a7d35edeb1549237e6d7fa7b5;
static PyObject *const_str_digest_fef11bb321505374344333b7cea4e0f2;
extern PyObject *const_str_plain_create_x509_revoked_certificate;
extern PyObject *const_str_plain_dh_parameters_supported;
static PyObject *const_str_digest_ddd3f25408786f407733d646162f8d59;
static PyObject *const_str_digest_b09a78bcdea313fb784b38a1897b608d;
extern PyObject *const_str_plain_load_pem_x509_certificate;
static PyObject *const_str_digest_b436da15690b01b9c2fa78c41a227f26;
static PyObject *const_str_digest_be637128b04df99668b57250bcb90304;
extern PyObject *const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple;
static PyObject *const_tuple_str_plain_PBKDF2HMACBackend_tuple_type_object_tuple_tuple;
static PyObject *const_str_digest_4246db05939576f6276977ea381784ca;
static PyObject *const_str_digest_2940678556f722c409387e50b7b6f720;
extern PyObject *const_str_plain_private_value;
extern PyObject *const_str_plain_create_x509_csr;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_d65ea6744de02ec30f1a7b3161ba6680 = UNSTREAM_STRING( &constant_bin[ 101730 ], 33, 0 );
    const_str_digest_fcac789749766281ae7df79b06104ed5 = UNSTREAM_STRING( &constant_bin[ 101763 ], 37, 0 );
    const_str_digest_53a083a9ba6ba623d9ca1da980ff8f59 = UNSTREAM_STRING( &constant_bin[ 101800 ], 43, 0 );
    const_str_digest_e05d2a8640d15d821ac8931cff3ceeb6 = UNSTREAM_STRING( &constant_bin[ 101843 ], 51, 0 );
    const_str_digest_a07055728045b591bf983a61871792e6 = UNSTREAM_STRING( &constant_bin[ 101894 ], 26, 0 );
    const_str_digest_33d76b6766d04126d26b70e9574220c1 = UNSTREAM_STRING( &constant_bin[ 101920 ], 37, 0 );
    const_str_digest_c7251c4b455903e91a75d8e4d6a9b2de = UNSTREAM_STRING( &constant_bin[ 101957 ], 32, 0 );
    const_str_digest_81516a1ff2b57afcf142bb8cd8e4cf4b = UNSTREAM_STRING( &constant_bin[ 101989 ], 44, 0 );
    const_str_digest_33b1b14451d03f361add6297947e995c = UNSTREAM_STRING( &constant_bin[ 102033 ], 43, 0 );
    const_tuple_str_plain_self_str_plain_parameters_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_parameters_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_parameters_tuple, 1, const_str_plain_parameters ); Py_INCREF( const_str_plain_parameters );
    const_tuple_str_plain_self_str_plain_builder_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_builder_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_builder_tuple, 1, const_str_plain_builder ); Py_INCREF( const_str_plain_builder );
    const_str_digest_18510f252a61499a948652382e1faf94 = UNSTREAM_STRING( &constant_bin[ 102076 ], 32, 0 );
    const_str_digest_ea519da6621b2e6e31eb85b5c326163a = UNSTREAM_STRING( &constant_bin[ 102108 ], 87, 0 );
    const_str_digest_be2baefacd213848c3218d58e5337d00 = UNSTREAM_STRING( &constant_bin[ 102195 ], 52, 0 );
    const_tuple_str_plain_ScryptBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ScryptBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_ScryptBackend ); Py_INCREF( const_str_plain_ScryptBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_ScryptBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_4d1cd79c69148c2c65a70d73a3298974 = UNSTREAM_STRING( &constant_bin[ 102247 ], 121, 0 );
    const_str_digest_f3b571290b0071f85349aa1e98deefa1 = UNSTREAM_STRING( &constant_bin[ 102368 ], 35, 0 );
    const_str_digest_5821e221916481c3f38394f7778eebff = UNSTREAM_STRING( &constant_bin[ 102403 ], 78, 0 );
    const_str_digest_c0bf5d81d20e7eb0288d1c3ad78eeb28 = UNSTREAM_STRING( &constant_bin[ 102481 ], 84, 0 );
    const_str_digest_7990d9b2c5d411ebc0586c15e0582def = UNSTREAM_STRING( &constant_bin[ 102565 ], 29, 0 );
    const_tuple_str_plain_self_str_plain_key_size_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_size_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_key_size_tuple, 1, const_str_plain_key_size ); Py_INCREF( const_str_plain_key_size );
    const_str_digest_33d14a975b19066b138ce5eafd89cff9 = UNSTREAM_STRING( &constant_bin[ 102594 ], 84, 0 );
    const_str_digest_8e914904ff9e228505332d098348b4f9 = UNSTREAM_STRING( &constant_bin[ 102678 ], 88, 0 );
    const_tuple_str_plain_self_str_plain_curve_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_curve_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_curve_tuple, 1, const_str_plain_curve ); Py_INCREF( const_str_plain_curve );
    const_str_digest_ddc4b6aa46809460a2e0c38829ca8bd3 = UNSTREAM_STRING( &constant_bin[ 102766 ], 36, 0 );
    const_str_digest_ecf7cddfdd7dec8b835d1f188834882c = UNSTREAM_STRING( &constant_bin[ 102802 ], 35, 0 );
    const_str_digest_e5bb0ce7e7381f786f9677c69b442e65 = UNSTREAM_STRING( &constant_bin[ 102837 ], 86, 0 );
    const_str_digest_dc1c83583d36fa154969d46c16a00fa5 = UNSTREAM_STRING( &constant_bin[ 102923 ], 48, 0 );
    const_str_digest_84a9b90f7e986466b5f551b58b5724d7 = UNSTREAM_STRING( &constant_bin[ 102971 ], 76, 0 );
    const_str_digest_58bcce40198f92624c1420d024d9e742 = UNSTREAM_STRING( &constant_bin[ 103047 ], 27, 0 );
    const_str_digest_d3af1ae38ce39ea25482b1b131316438 = UNSTREAM_STRING( &constant_bin[ 103074 ], 43, 0 );
    const_str_digest_a7328ecdb816372bec3cb1ca678a22bb = UNSTREAM_STRING( &constant_bin[ 103117 ], 100, 0 );
    const_str_digest_4b453a137c85819b12357ec23de919e0 = UNSTREAM_STRING( &constant_bin[ 103217 ], 44, 0 );
    const_str_digest_a25814a7003287ed48ae69a3e2c8571e = UNSTREAM_STRING( &constant_bin[ 103261 ], 85, 0 );
    const_str_digest_25517886b3a6e05088fb43990d2543ca = UNSTREAM_STRING( &constant_bin[ 103346 ], 71, 0 );
    const_str_digest_a5ec310bffa4b7282e6e990718c639b5 = UNSTREAM_STRING( &constant_bin[ 103417 ], 33, 0 );
    const_str_digest_bfd8b0fb9948f86400e1f7813c12d1ab = UNSTREAM_STRING( &constant_bin[ 103450 ], 33, 0 );
    const_str_digest_a4c797d45dd48ad8578fe46499751f24 = UNSTREAM_STRING( &constant_bin[ 103483 ], 98, 0 );
    const_str_digest_9b3ba72a7d95da27c8479268a79874ec = UNSTREAM_STRING( &constant_bin[ 103581 ], 35, 0 );
    const_str_digest_692d8108005f88d96ef98564f6598985 = UNSTREAM_STRING( &constant_bin[ 103616 ], 81, 0 );
    const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 1, const_str_plain_builder ); Py_INCREF( const_str_plain_builder );
    PyTuple_SET_ITEM( const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 2, const_str_plain_private_key ); Py_INCREF( const_str_plain_private_key );
    PyTuple_SET_ITEM( const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 3, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    const_tuple_str_plain_X509Backend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X509Backend_tuple_type_object_tuple_tuple, 0, const_str_plain_X509Backend ); Py_INCREF( const_str_plain_X509Backend );
    PyTuple_SET_ITEM( const_tuple_str_plain_X509Backend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_ff481c86ef7f2574959a6704954fc569 = UNSTREAM_STRING( &constant_bin[ 103697 ], 37, 0 );
    const_str_digest_fe72ce46d6560c2e8fe1174440f925b8 = UNSTREAM_STRING( &constant_bin[ 103734 ], 35, 0 );
    const_str_digest_4c0fc62fa075fc302d7e12cdc2b1a3c6 = UNSTREAM_STRING( &constant_bin[ 103769 ], 100, 0 );
    const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 1, const_str_plain_private_value ); Py_INCREF( const_str_plain_private_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 2, const_str_plain_curve ); Py_INCREF( const_str_plain_curve );
    const_tuple_str_plain_RSABackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_RSABackend_tuple_type_object_tuple_tuple, 0, const_str_plain_RSABackend ); Py_INCREF( const_str_plain_RSABackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_RSABackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_4d12925bf986a554565ceebc784606e4 = UNSTREAM_STRING( &constant_bin[ 103869 ], 35, 0 );
    const_str_digest_12bf30ea148596af8b3db51961b172df = UNSTREAM_STRING( &constant_bin[ 103904 ], 58, 0 );
    const_tuple_str_plain_DHBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DHBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_DHBackend ); Py_INCREF( const_str_plain_DHBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_DHBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_b96d5df8801041201634c50a0b42cbf8 = UNSTREAM_STRING( &constant_bin[ 103962 ], 27, 0 );
    const_str_digest_3be54078b9bd767d7e0767b5226c3e60 = UNSTREAM_STRING( &constant_bin[ 103989 ], 66, 0 );
    const_str_digest_ae098508dd4bf88f8bb4a07250bc5a8b = UNSTREAM_STRING( &constant_bin[ 104055 ], 86, 0 );
    const_tuple_str_plain_DSABackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DSABackend_tuple_type_object_tuple_tuple, 0, const_str_plain_DSABackend ); Py_INCREF( const_str_plain_DSABackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_DSABackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_tuple_str_plain_HashBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HashBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_HashBackend ); Py_INCREF( const_str_plain_HashBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_HashBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_9a2a007b90c3edace6388a2db0d2942e = UNSTREAM_STRING( &constant_bin[ 104141 ], 27, 0 );
    const_str_digest_9d40568e0a0973abf5fe84776e9bb1b7 = UNSTREAM_STRING( &constant_bin[ 104168 ], 72, 0 );
    const_str_digest_6314fa7c6fc48e2b2c8702ed369f8da8 = UNSTREAM_STRING( &constant_bin[ 104240 ], 81, 0 );
    const_str_digest_71f31f6c62b756a0153edb43b508ea72 = UNSTREAM_STRING( &constant_bin[ 104321 ], 51, 0 );
    const_str_digest_e9c17f9e6a2cfa9137494e7cce4ddb68 = UNSTREAM_STRING( &constant_bin[ 104372 ], 51, 0 );
    const_str_digest_91cef7da9413817b1df5f9f543c1b117 = UNSTREAM_STRING( &constant_bin[ 104423 ], 102, 0 );
    const_str_digest_e4a6caad51a69cf6559e60044f2d3dbd = UNSTREAM_STRING( &constant_bin[ 104525 ], 72, 0 );
    const_str_digest_6f04a0ccb7544097cd875c7c31834e6f = UNSTREAM_STRING( &constant_bin[ 104597 ], 103, 0 );
    const_str_digest_7057df53c8250756158e4b05409a0193 = UNSTREAM_STRING( &constant_bin[ 104700 ], 29, 0 );
    const_str_digest_8184e067c7b3318913c3d0af6b23b2b9 = UNSTREAM_STRING( &constant_bin[ 104729 ], 73, 0 );
    const_str_digest_4a6ebccb61a3ed6f4d87c5a399d52376 = UNSTREAM_STRING( &constant_bin[ 104802 ], 26, 0 );
    const_str_digest_f12949b495741f5c79c5f42f6c102606 = UNSTREAM_STRING( &constant_bin[ 104828 ], 65, 0 );
    const_tuple_str_plain_PEMSerializationBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PEMSerializationBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_PEMSerializationBackend ); Py_INCREF( const_str_plain_PEMSerializationBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_PEMSerializationBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_c41f2130b43138f1ac622def55e7960d = UNSTREAM_STRING( &constant_bin[ 104893 ], 29, 0 );
    const_str_digest_6e975c3005ce9d0aac9bd88f7910c3da = UNSTREAM_STRING( &constant_bin[ 104922 ], 35, 0 );
    const_str_digest_b05edecec0692327d113db121c176a41 = UNSTREAM_STRING( &constant_bin[ 104957 ], 56, 0 );
    const_str_digest_39ea98a078b45b6c442185503b966df2 = UNSTREAM_STRING( &constant_bin[ 105013 ], 70, 0 );
    const_str_digest_2a51df9642a3dcdb589c8f1b9733a429 = UNSTREAM_STRING( &constant_bin[ 105083 ], 88, 0 );
    const_tuple_63f249e20181d69efd847aace0409a8e_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 1, const_str_plain_algorithm ); Py_INCREF( const_str_plain_algorithm );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 2, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 3, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 4, const_str_plain_iterations ); Py_INCREF( const_str_plain_iterations );
    PyTuple_SET_ITEM( const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 5, const_str_plain_key_material ); Py_INCREF( const_str_plain_key_material );
    const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 1, const_str_plain_key_material ); Py_INCREF( const_str_plain_key_material );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 2, const_str_plain_salt ); Py_INCREF( const_str_plain_salt );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 3, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 5, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 6, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    const_str_digest_bf0e2122a539f658a48bcef89877d604 = UNSTREAM_STRING( &constant_bin[ 105171 ], 44, 0 );
    const_str_digest_292e56cfdf0067098a88b361e7526e04 = UNSTREAM_STRING( &constant_bin[ 105215 ], 27, 0 );
    const_str_digest_838ca9b3bd6417f22d1fd7753d4ca9b0 = UNSTREAM_STRING( &constant_bin[ 105242 ], 34, 0 );
    const_str_digest_3efa1d11c5d8421580b0e5c4821ccde0 = UNSTREAM_STRING( &constant_bin[ 105276 ], 71, 0 );
    const_str_digest_4ac388cc3596594b9fd1573ef2539537 = UNSTREAM_STRING( &constant_bin[ 105347 ], 80, 0 );
    const_str_digest_d5feef865a5be1439d94f255821ef2c1 = UNSTREAM_STRING( &constant_bin[ 105427 ], 64, 0 );
    const_str_digest_2f9695857620d6d2233ed0e7e24be4e6 = UNSTREAM_STRING( &constant_bin[ 105491 ], 88, 0 );
    const_str_digest_a37049685fe61ee43f425ff3884244a8 = UNSTREAM_STRING( &constant_bin[ 105579 ], 66, 0 );
    const_str_digest_d5ab83d9695f4da166c2e74669073e5a = UNSTREAM_STRING( &constant_bin[ 105645 ], 67, 0 );
    const_str_digest_3552c2706bf0622b7fcc4e5c6e7975ed = UNSTREAM_STRING( &constant_bin[ 105712 ], 132, 0 );
    const_str_digest_c67aac6a6dd9a1db09eb5b9767b70312 = UNSTREAM_STRING( &constant_bin[ 105844 ], 43, 0 );
    const_str_digest_7a29ddf50f809e8e31a40c49159f32a5 = UNSTREAM_STRING( &constant_bin[ 105887 ], 42, 0 );
    const_str_digest_36f46d30012dfac1478e9cc097486be1 = UNSTREAM_STRING( &constant_bin[ 105929 ], 45, 0 );
    const_str_digest_e6c0eefbbb76d67db8004781dbb68b06 = UNSTREAM_STRING( &constant_bin[ 105974 ], 36, 0 );
    const_str_digest_c05e2b69d027322920a7d95b35b10126 = UNSTREAM_STRING( &constant_bin[ 106010 ], 34, 0 );
    const_str_digest_f766d6a9c4464307c0995d1178cc0bba = UNSTREAM_STRING( &constant_bin[ 106044 ], 50, 0 );
    const_str_digest_e908e8afe1a83e928d0bef8e329dc68a = UNSTREAM_STRING( &constant_bin[ 106094 ], 70, 0 );
    const_str_digest_e2f41cda08e5fbeb088609dad0cd6bf1 = UNSTREAM_STRING( &constant_bin[ 106164 ], 41, 0 );
    const_str_digest_da416487c64439c0b905a36ebebfdd99 = UNSTREAM_STRING( &constant_bin[ 106205 ], 30, 0 );
    const_tuple_str_plain_HMACBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HMACBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_HMACBackend ); Py_INCREF( const_str_plain_HMACBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_HMACBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_411702a9298f3a6580481a55ab9b9a26 = UNSTREAM_STRING( &constant_bin[ 106235 ], 45, 0 );
    const_tuple_str_plain_CipherBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CipherBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_CipherBackend ); Py_INCREF( const_str_plain_CipherBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_CipherBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_cad1312c0a8ed12faaeb2b2356b3f42c = UNSTREAM_STRING( &constant_bin[ 106280 ], 59, 0 );
    const_str_digest_1fd991e1ec7a538f20fe33eb5a63c23a = UNSTREAM_STRING( &constant_bin[ 106339 ], 50, 0 );
    const_str_digest_897500164945828209e283a28aa61aa3 = UNSTREAM_STRING( &constant_bin[ 106389 ], 27, 0 );
    const_str_digest_7b42f6a1029a280baccadb6ba9d7ebc2 = UNSTREAM_STRING( &constant_bin[ 106416 ], 127, 0 );
    const_str_digest_df210813cecf8d389a6a11cbd910135b = UNSTREAM_STRING( &constant_bin[ 106543 ], 101, 0 );
    const_str_digest_79acb9468fa8327dea48007c163727a0 = UNSTREAM_STRING( &constant_bin[ 106644 ], 27, 0 );
    const_str_digest_eadb4ee42e8556a29a0e4480e7acc57b = UNSTREAM_STRING( &constant_bin[ 106671 ], 39, 0 );
    const_str_digest_e33630e0c38bffcff23972e2969cd960 = UNSTREAM_STRING( &constant_bin[ 106710 ], 45, 0 );
    const_str_digest_2112a33833bf0835d01f85452f1ef017 = UNSTREAM_STRING( &constant_bin[ 106755 ], 34, 0 );
    const_str_digest_802d8f8fd7de6f6609d7f954c8f40bf6 = UNSTREAM_STRING( &constant_bin[ 106789 ], 122, 0 );
    const_str_digest_61a0b13c29d14e60d13e27fe3fcabb7d = UNSTREAM_STRING( &constant_bin[ 106911 ], 35, 0 );
    const_tuple_str_plain_EllipticCurveBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_EllipticCurveBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_EllipticCurveBackend ); Py_INCREF( const_str_plain_EllipticCurveBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_EllipticCurveBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_d57a4d29065ab4a1f221ca9cc91f876b = UNSTREAM_STRING( &constant_bin[ 106946 ], 67, 0 );
    const_str_digest_7f30278a4fcb72c48b5cd4ea5d079914 = UNSTREAM_STRING( &constant_bin[ 107013 ], 73, 0 );
    const_tuple_str_plain_CMACBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_CMACBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_CMACBackend ); Py_INCREF( const_str_plain_CMACBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_CMACBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_d7343ee22e2272ac73afb381205bd004 = UNSTREAM_STRING( &constant_bin[ 107086 ], 113, 0 );
    const_str_digest_1106e8ed4afc99c4f9cf66a63d4e426d = UNSTREAM_STRING( &constant_bin[ 107199 ], 56, 0 );
    const_str_digest_36ba26e04775ce62acc2dcd612c29d46 = UNSTREAM_STRING( &constant_bin[ 107255 ], 58, 0 );
    const_str_digest_06e3225334eb391348195f4973a16cbd = UNSTREAM_STRING( &constant_bin[ 107313 ], 59, 0 );
    const_str_digest_d9e232185946daeca898e40c39f68e36 = UNSTREAM_STRING( &constant_bin[ 107372 ], 60, 0 );
    const_str_digest_28f4468d6c9734e18c72bd5ca6760f2c = UNSTREAM_STRING( &constant_bin[ 107432 ], 58, 0 );
    const_tuple_str_plain_self_str_plain_numbers_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_numbers_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_numbers_tuple, 1, const_str_plain_numbers ); Py_INCREF( const_str_plain_numbers );
    const_str_digest_f0e494b50e5b866fcff26cb8f400c7a1 = UNSTREAM_STRING( &constant_bin[ 107490 ], 119, 0 );
    const_str_digest_7186644563a7611ac1bbe89086ad0390 = UNSTREAM_STRING( &constant_bin[ 107609 ], 55, 0 );
    const_tuple_str_plain_DERSerializationBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_DERSerializationBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_DERSerializationBackend ); Py_INCREF( const_str_plain_DERSerializationBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_DERSerializationBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_6a83a3310dae744ebfd328dac16db727 = UNSTREAM_STRING( &constant_bin[ 107664 ], 124, 0 );
    const_str_digest_844858cfc3f176cb25cb563fa156777b = UNSTREAM_STRING( &constant_bin[ 107788 ], 120, 0 );
    const_str_digest_f4449f1a7d35edeb1549237e6d7fa7b5 = UNSTREAM_STRING( &constant_bin[ 107908 ], 27, 0 );
    const_str_digest_fef11bb321505374344333b7cea4e0f2 = UNSTREAM_STRING( &constant_bin[ 107935 ], 54, 0 );
    const_str_digest_ddd3f25408786f407733d646162f8d59 = UNSTREAM_STRING( &constant_bin[ 107989 ], 85, 0 );
    const_str_digest_b09a78bcdea313fb784b38a1897b608d = UNSTREAM_STRING( &constant_bin[ 108074 ], 48, 0 );
    const_str_digest_b436da15690b01b9c2fa78c41a227f26 = UNSTREAM_STRING( &constant_bin[ 108122 ], 59, 0 );
    const_str_digest_be637128b04df99668b57250bcb90304 = UNSTREAM_STRING( &constant_bin[ 108181 ], 84, 0 );
    const_tuple_str_plain_PBKDF2HMACBackend_tuple_type_object_tuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PBKDF2HMACBackend_tuple_type_object_tuple_tuple, 0, const_str_plain_PBKDF2HMACBackend ); Py_INCREF( const_str_plain_PBKDF2HMACBackend );
    PyTuple_SET_ITEM( const_tuple_str_plain_PBKDF2HMACBackend_tuple_type_object_tuple_tuple, 1, const_tuple_type_object_tuple ); Py_INCREF( const_tuple_type_object_tuple );
    const_str_digest_4246db05939576f6276977ea381784ca = UNSTREAM_STRING( &constant_bin[ 108265 ], 32, 0 );
    const_str_digest_2940678556f722c409387e50b7b6f720 = UNSTREAM_STRING( &constant_bin[ 108297 ], 43, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_cryptography$hazmat$backends$interfaces( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a2f8a590e966b3a16638c31205342ee3;
static PyCodeObject *codeobj_b2289dc3e9b5fd0400c0bfcf35308221;
static PyCodeObject *codeobj_f0e3c48cad3be70afd99ed2bc2bdd3b1;
static PyCodeObject *codeobj_8e22e07d70547f6ef7c9bebbc9a1448e;
static PyCodeObject *codeobj_ed4e85e8cdc45a45039a4ceb0199227c;
static PyCodeObject *codeobj_dece1a7588668ab96ca890beee92deec;
static PyCodeObject *codeobj_9bf2fbe904e1e56e42c8d240d8831280;
static PyCodeObject *codeobj_9a557fa4e02021fe921bfc14d8bc3f50;
static PyCodeObject *codeobj_ece01c6951031f827e1085dcf97efc9c;
static PyCodeObject *codeobj_3f251b27fa9cbdfd3bdfa26ae962b72f;
static PyCodeObject *codeobj_29a30cbf5f7e01fc2c0c4d5156bf3495;
static PyCodeObject *codeobj_64d85225ba6894586300fc88dd1f533c;
static PyCodeObject *codeobj_d2033cebfae5bd7720a2318489c6bef4;
static PyCodeObject *codeobj_e920632726ca8dfcdf6be4a34e554de8;
static PyCodeObject *codeobj_3aa86ac328ea5c64506b027c76eabac1;
static PyCodeObject *codeobj_b76cfbd90fc60d03ed65685f209b8985;
static PyCodeObject *codeobj_c1b40b425197f1cc121028d3b231d3cc;
static PyCodeObject *codeobj_a6ba6fb2e359f9acf158db182a86b096;
static PyCodeObject *codeobj_158955cfb882cd491e4f03b54e3aff55;
static PyCodeObject *codeobj_b357a568d35c1fd984347d38dc5ff1eb;
static PyCodeObject *codeobj_75ae6f17147a91f1b96b207fb6aa106e;
static PyCodeObject *codeobj_95aa828e58ce13b5cba218ff1f55b78b;
static PyCodeObject *codeobj_33301d818f6dfff94884d8e0e335413b;
static PyCodeObject *codeobj_9e226d8449a58dbb180e3345b2465ef9;
static PyCodeObject *codeobj_9475be2e60ac50e8a4658e07c0a43467;
static PyCodeObject *codeobj_d6eb140f61a24d3a0bf64237447ef4d3;
static PyCodeObject *codeobj_637b48315d57a510e6eebb4d2b6a35fc;
static PyCodeObject *codeobj_15bab8d0a89bf92341c66cbdd62d390c;
static PyCodeObject *codeobj_36b224dfe39da05cef09c604749637b1;
static PyCodeObject *codeobj_0308e589f8afd1388155cd5f66dc56bf;
static PyCodeObject *codeobj_70d4388d8a08ef99e42d068c516edc3a;
static PyCodeObject *codeobj_191eeb801543c8463889f74d1414ef72;
static PyCodeObject *codeobj_82de72e3e97c914922c5a9c67ffe3280;
static PyCodeObject *codeobj_35d983e1878adc747b5b9988abc70c3d;
static PyCodeObject *codeobj_d2e7b1689af77c69fc580dacf2be4ea0;
static PyCodeObject *codeobj_cf14d14e8889cb7d824f7a667c3639f1;
static PyCodeObject *codeobj_481086cc9e12275deceaa4efc5e70f68;
static PyCodeObject *codeobj_a297800a4bd05cd209ad6fb396f2869e;
static PyCodeObject *codeobj_f61e9701b644b04de77a806b05c6d486;
static PyCodeObject *codeobj_6fb87992fa498bf7d34b4adfa28955ba;
static PyCodeObject *codeobj_fa47d24f4a2a1bc648f905d06b35e7b9;
static PyCodeObject *codeobj_a5e395a7e2e1e44346027842dd2c0715;
static PyCodeObject *codeobj_a5f71dfc6c2de05beb2ebba07e4bd799;
static PyCodeObject *codeobj_d8ecc9a5186c05541894da7033f23dc6;
static PyCodeObject *codeobj_e34ef1a273b727bddc8c836af39b0f25;
static PyCodeObject *codeobj_920708035f9ab808701f889ed9a17327;
static PyCodeObject *codeobj_c695a223668fcfe3808ff3565bcdaaf9;
static PyCodeObject *codeobj_97c4c3c4a1f06604d9b9b1cafb32275a;
static PyCodeObject *codeobj_d214650e74b0607d57bcc47d3655f3e0;
static PyCodeObject *codeobj_3c802451e4bd11252822c2fe9db3d439;
static PyCodeObject *codeobj_3701f736acc84ff56120d698365d8694;
static PyCodeObject *codeobj_0dfe58a3b79202e92692189a7b6e981d;
static PyCodeObject *codeobj_1f0bc59b72a9c1e85d634edf646551d4;
static PyCodeObject *codeobj_3fd337ec691690b8b322c6b3c8590dac;
static PyCodeObject *codeobj_6d7460bd6fcb644e4a4ee8be340ee338;
static PyCodeObject *codeobj_ca60da712f455b7582e65354cb8aa609;
static PyCodeObject *codeobj_ee8d0f603afce5a93930ae73991f127a;
static PyCodeObject *codeobj_170cfcca2c204baef9741a19d9b7a0c9;
static PyCodeObject *codeobj_e4f990ae276e8081a875dec7cb7bd997;
static PyCodeObject *codeobj_6267514fbff7dd179c460a7675eec7ff;
static PyCodeObject *codeobj_935eea2e158af0041e9696d92c68462f;
static PyCodeObject *codeobj_3ecd2090542dafc9f341786c950ddb6d;
static PyCodeObject *codeobj_f50fe432fc78ac9623251f40001af563;
static PyCodeObject *codeobj_6a03c3057b3644cc733d659f18da3f0f;
static PyCodeObject *codeobj_8f209d661288424492bd335fa992ab29;
static PyCodeObject *codeobj_c8f9a341877d826a98cf3bfff5ed67a6;
static PyCodeObject *codeobj_a866d37a86bedd5cc1a10e95179e0f10;
static PyCodeObject *codeobj_11a39883720d45bccf28fc4c66c0230e;
static PyCodeObject *codeobj_0a0a1e07acbb09599d7b9714a6cc187c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7a29ddf50f809e8e31a40c49159f32a5 );
    codeobj_a2f8a590e966b3a16638c31205342ee3 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dc1c83583d36fa154969d46c16a00fa5, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_b2289dc3e9b5fd0400c0bfcf35308221 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CMACBackend, 65, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_f0e3c48cad3be70afd99ed2bc2bdd3b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_CipherBackend, 13, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_8e22e07d70547f6ef7c9bebbc9a1448e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DERSerializationBackend, 254, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_ed4e85e8cdc45a45039a4ceb0199227c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DHBackend, 335, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_dece1a7588668ab96ca890beee92deec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_DSABackend, 132, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_9bf2fbe904e1e56e42c8d240d8831280 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_EllipticCurveBackend, 184, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_9a557fa4e02021fe921bfc14d8bc3f50 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HMACBackend, 49, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_ece01c6951031f827e1085dcf97efc9c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HashBackend, 34, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_3f251b27fa9cbdfd3bdfa26ae962b72f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PBKDF2HMACBackend, 80, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_29a30cbf5f7e01fc2c0c4d5156bf3495 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PEMSerializationBackend, 232, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_64d85225ba6894586300fc88dd1f533c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RSABackend, 97, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d2033cebfae5bd7720a2318489c6bef4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ScryptBackend, 390, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_e920632726ca8dfcdf6be4a34e554de8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_X509Backend, 276, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_3aa86ac328ea5c64506b027c76eabac1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cipher_supported, 14, const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, 3, 0, CO_NOFREE );
    codeobj_b76cfbd90fc60d03ed65685f209b8985 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cmac_algorithm_supported, 66, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, CO_NOFREE );
    codeobj_c1b40b425197f1cc121028d3b231d3cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_cmac_ctx, 72, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, CO_NOFREE );
    codeobj_a6ba6fb2e359f9acf158db182a86b096 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_hash_ctx, 41, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, CO_NOFREE );
    codeobj_158955cfb882cd491e4f03b54e3aff55 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_hmac_ctx, 57, const_tuple_str_plain_self_str_plain_key_str_plain_algorithm_tuple, 3, 0, CO_NOFREE );
    codeobj_b357a568d35c1fd984347d38dc5ff1eb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_symmetric_decryption_ctx, 26, const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, 3, 0, CO_NOFREE );
    codeobj_75ae6f17147a91f1b96b207fb6aa106e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_symmetric_encryption_ctx, 20, const_tuple_str_plain_self_str_plain_cipher_str_plain_mode_tuple, 3, 0, CO_NOFREE );
    codeobj_95aa828e58ce13b5cba218ff1f55b78b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_x509_certificate, 307, const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 4, 0, CO_NOFREE );
    codeobj_33301d818f6dfff94884d8e0e335413b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_x509_crl, 313, const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 4, 0, CO_NOFREE );
    codeobj_9e226d8449a58dbb180e3345b2465ef9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_x509_csr, 301, const_tuple_9b0b58b585c03854ddedb55d2370bf31_tuple, 4, 0, CO_NOFREE );
    codeobj_9475be2e60ac50e8a4658e07c0a43467 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create_x509_revoked_certificate, 320, const_tuple_str_plain_self_str_plain_builder_tuple, 2, 0, CO_NOFREE );
    codeobj_d6eb140f61a24d3a0bf64237447ef4d3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_derive_elliptic_curve_private_key, 224, const_tuple_str_plain_self_str_plain_private_value_str_plain_curve_tuple, 3, 0, CO_NOFREE );
    codeobj_637b48315d57a510e6eebb4d2b6a35fc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_derive_pbkdf2_hmac, 88, const_tuple_63f249e20181d69efd847aace0409a8e_tuple, 6, 0, CO_NOFREE );
    codeobj_15bab8d0a89bf92341c66cbdd62d390c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_derive_scrypt, 391, const_tuple_0df4240bd377cb517475e76f8ce07ac2_tuple, 7, 0, CO_NOFREE );
    codeobj_36b224dfe39da05cef09c604749637b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dh_parameters_supported, 375, const_tuple_str_plain_self_str_plain_p_str_plain_g_str_plain_q_tuple, 4, 0, CO_NOFREE );
    codeobj_0308e589f8afd1388155cd5f66dc56bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dh_x942_serialization_supported, 381, const_tuple_str_plain_self_tuple, 1, 0, CO_NOFREE );
    codeobj_70d4388d8a08ef99e42d068c516edc3a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsa_hash_supported, 152, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, CO_NOFREE );
    codeobj_191eeb801543c8463889f74d1414ef72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dsa_parameters_supported, 158, const_tuple_str_plain_self_str_plain_p_str_plain_q_str_plain_g_tuple, 4, 0, CO_NOFREE );
    codeobj_82de72e3e97c914922c5a9c67ffe3280 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_19dba398fcfd0968a3203d943a394d68, 218, const_tuple_str_plain_self_str_plain_algorithm_str_plain_curve_tuple, 3, 0, CO_NOFREE );
    codeobj_35d983e1878adc747b5b9988abc70c3d = MAKE_CODEOBJ( module_filename_obj, const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3, 185, const_tuple_str_plain_self_str_plain_signature_algorithm_str_plain_curve_tuple, 3, 0, CO_NOFREE );
    codeobj_d2e7b1689af77c69fc580dacf2be4ea0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_elliptic_curve_supported, 194, const_tuple_str_plain_self_str_plain_curve_tuple, 2, 0, CO_NOFREE );
    codeobj_cf14d14e8889cb7d824f7a667c3639f1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dh_parameters, 336, const_tuple_str_plain_self_str_plain_generator_str_plain_key_size_tuple, 3, 0, CO_NOFREE );
    codeobj_481086cc9e12275deceaa4efc5e70f68 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dh_private_key, 343, const_tuple_str_plain_self_str_plain_parameters_tuple, 2, 0, CO_NOFREE );
    codeobj_a297800a4bd05cd209ad6fb396f2869e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dh_private_key_and_parameters, 350, const_tuple_str_plain_self_str_plain_generator_str_plain_key_size_tuple, 3, 0, CO_NOFREE );
    codeobj_f61e9701b644b04de77a806b05c6d486 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dsa_parameters, 133, const_tuple_str_plain_self_str_plain_key_size_tuple, 2, 0, CO_NOFREE );
    codeobj_6fb87992fa498bf7d34b4adfa28955ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dsa_private_key, 139, const_tuple_str_plain_self_str_plain_parameters_tuple, 2, 0, CO_NOFREE );
    codeobj_fa47d24f4a2a1bc648f905d06b35e7b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_dsa_private_key_and_parameters, 146, const_tuple_str_plain_self_str_plain_key_size_tuple, 2, 0, CO_NOFREE );
    codeobj_a5e395a7e2e1e44346027842dd2c0715 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_elliptic_curve_private_key, 200, const_tuple_str_plain_self_str_plain_curve_tuple, 2, 0, CO_NOFREE );
    codeobj_a5f71dfc6c2de05beb2ebba07e4bd799 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_rsa_parameters_supported, 111, const_tuple_str_plain_self_str_plain_public_exponent_str_plain_key_size_tuple, 3, 0, CO_NOFREE );
    codeobj_d8ecc9a5186c05541894da7033f23dc6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generate_rsa_private_key, 98, const_tuple_str_plain_self_str_plain_public_exponent_str_plain_key_size_tuple, 3, 0, CO_NOFREE );
    codeobj_e34ef1a273b727bddc8c836af39b0f25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hash_supported, 35, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, CO_NOFREE );
    codeobj_920708035f9ab808701f889ed9a17327 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_hmac_supported, 50, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, CO_NOFREE );
    codeobj_c695a223668fcfe3808ff3565bcdaaf9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_parameters, 268, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_NOFREE );
    codeobj_97c4c3c4a1f06604d9b9b1cafb32275a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_private_key, 255, const_tuple_str_plain_self_str_plain_data_str_plain_password_tuple, 3, 0, CO_NOFREE );
    codeobj_d214650e74b0607d57bcc47d3655f3e0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_public_key, 262, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_NOFREE );
    codeobj_3c802451e4bd11252822c2fe9db3d439 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_x509_certificate, 283, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_NOFREE );
    codeobj_3701f736acc84ff56120d698365d8694 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_der_x509_csr, 289, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_NOFREE );
    codeobj_0dfe58a3b79202e92692189a7b6e981d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dh_parameter_numbers, 369, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_1f0bc59b72a9c1e85d634edf646551d4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dh_private_numbers, 357, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_3fd337ec691690b8b322c6b3c8590dac = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dh_public_numbers, 363, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_6d7460bd6fcb644e4a4ee8be340ee338 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dsa_parameter_numbers, 176, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_ca60da712f455b7582e65354cb8aa609 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dsa_private_numbers, 164, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_ee8d0f603afce5a93930ae73991f127a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_dsa_public_numbers, 170, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_170cfcca2c204baef9741a19d9b7a0c9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_elliptic_curve_private_numbers, 212, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_e4f990ae276e8081a875dec7cb7bd997 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_elliptic_curve_public_numbers, 206, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_6267514fbff7dd179c460a7675eec7ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_parameters, 246, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_NOFREE );
    codeobj_935eea2e158af0041e9696d92c68462f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_private_key, 233, const_tuple_str_plain_self_str_plain_data_str_plain_password_tuple, 3, 0, CO_NOFREE );
    codeobj_3ecd2090542dafc9f341786c950ddb6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_public_key, 240, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_NOFREE );
    codeobj_f50fe432fc78ac9623251f40001af563 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_x509_certificate, 277, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_NOFREE );
    codeobj_6a03c3057b3644cc733d659f18da3f0f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_pem_x509_csr, 295, const_tuple_str_plain_self_str_plain_data_tuple, 2, 0, CO_NOFREE );
    codeobj_8f209d661288424492bd335fa992ab29 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_rsa_private_numbers, 118, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_c8f9a341877d826a98cf3bfff5ed67a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_rsa_public_numbers, 124, const_tuple_str_plain_self_str_plain_numbers_tuple, 2, 0, CO_NOFREE );
    codeobj_a866d37a86bedd5cc1a10e95179e0f10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pbkdf2_hmac_supported, 81, const_tuple_str_plain_self_str_plain_algorithm_tuple, 2, 0, CO_NOFREE );
    codeobj_11a39883720d45bccf28fc4c66c0230e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rsa_padding_supported, 105, const_tuple_str_plain_self_str_plain_padding_tuple, 2, 0, CO_NOFREE );
    codeobj_0a0a1e07acbb09599d7b9714a6cc187c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_x509_name_bytes, 327, const_tuple_str_plain_self_str_plain_name_tuple, 2, 0, CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported( PyObject *defaults );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported(  );


static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx(  );


// The module function definitions.
static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_cipher );
    par_cipher = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_cipher );
    par_cipher = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_cipher );
    par_cipher = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_cipher );
    par_cipher = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cipher = python_pars[ 1 ];
    PyObject *par_mode = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_cipher );
    par_cipher = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( par_cipher );
    par_cipher = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_4_hash_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_4_hash_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_algorithm = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *par_length = python_pars[ 2 ];
    PyObject *par_salt = python_pars[ 3 ];
    PyObject *par_iterations = python_pars[ 4 ];
    PyObject *par_key_material = python_pars[ 5 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_length );
    par_length = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( par_key_material );
    par_key_material = NULL;

    Py_XDECREF( par_salt );
    par_salt = NULL;

    Py_XDECREF( par_iterations );
    par_iterations = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_length );
    par_length = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( par_key_material );
    par_key_material = NULL;

    Py_XDECREF( par_salt );
    par_salt = NULL;

    Py_XDECREF( par_iterations );
    par_iterations = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_public_exponent = python_pars[ 1 ];
    PyObject *par_key_size = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    Py_XDECREF( par_public_exponent );
    par_public_exponent = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    Py_XDECREF( par_public_exponent );
    par_public_exponent = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_padding = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_padding );
    par_padding = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_padding );
    par_padding = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_public_exponent = python_pars[ 1 ];
    PyObject *par_key_size = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    Py_XDECREF( par_public_exponent );
    par_public_exponent = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    Py_XDECREF( par_public_exponent );
    par_public_exponent = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key_size = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_parameters = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_parameters );
    par_parameters = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_parameters );
    par_parameters = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key_size = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *par_q = python_pars[ 2 ];
    PyObject *par_g = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_g );
    par_g = NULL;

    Py_XDECREF( par_q );
    par_q = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_g );
    par_g = NULL;

    Py_XDECREF( par_q );
    par_q = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_signature_algorithm = python_pars[ 1 ];
    PyObject *par_curve = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;

    Py_XDECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;

    Py_XDECREF( par_signature_algorithm );
    par_signature_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_curve = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_curve = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_algorithm = python_pars[ 1 ];
    PyObject *par_curve = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_private_value = python_pars[ 1 ];
    PyObject *par_curve = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_private_value );
    par_private_value = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_private_value );
    par_private_value = NULL;

    Py_XDECREF( par_curve );
    par_curve = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_data );
    par_data = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_builder = python_pars[ 1 ];
    PyObject *par_private_key = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_builder );
    par_builder = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( par_private_key );
    par_private_key = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_builder );
    par_builder = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( par_private_key );
    par_private_key = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_builder = python_pars[ 1 ];
    PyObject *par_private_key = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_builder );
    par_builder = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( par_private_key );
    par_private_key = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_builder );
    par_builder = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( par_private_key );
    par_private_key = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_builder = python_pars[ 1 ];
    PyObject *par_private_key = python_pars[ 2 ];
    PyObject *par_algorithm = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_builder );
    par_builder = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( par_private_key );
    par_private_key = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_builder );
    par_builder = NULL;

    Py_XDECREF( par_algorithm );
    par_algorithm = NULL;

    Py_XDECREF( par_private_key );
    par_private_key = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_builder = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_builder );
    par_builder = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_builder );
    par_builder = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_generator = python_pars[ 1 ];
    PyObject *par_key_size = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    Py_XDECREF( par_generator );
    par_generator = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    Py_XDECREF( par_generator );
    par_generator = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_parameters = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_parameters );
    par_parameters = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_parameters );
    par_parameters = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_generator = python_pars[ 1 ];
    PyObject *par_key_size = python_pars[ 2 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    Py_XDECREF( par_generator );
    par_generator = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key_size );
    par_key_size = NULL;

    Py_XDECREF( par_generator );
    par_generator = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_numbers = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_numbers );
    par_numbers = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_p = python_pars[ 1 ];
    PyObject *par_g = python_pars[ 2 ];
    PyObject *par_q = python_pars[ 3 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_g );
    par_g = NULL;

    Py_XDECREF( par_q );
    par_q = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_g );
    par_g = NULL;

    Py_XDECREF( par_q );
    par_q = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key_material = python_pars[ 1 ];
    PyObject *par_salt = python_pars[ 2 ];
    PyObject *par_length = python_pars[ 3 ];
    PyObject *par_n = python_pars[ 4 ];
    PyObject *par_r = python_pars[ 5 ];
    PyObject *par_p = python_pars[ 6 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_length );
    par_length = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( par_key_material );
    par_key_material = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;

    Py_XDECREF( par_salt );
    par_salt = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_length );
    par_length = NULL;

    Py_XDECREF( par_n );
    par_n = NULL;

    Py_XDECREF( par_key_material );
    par_key_material = NULL;

    Py_XDECREF( par_p );
    par_p = NULL;

    Py_XDECREF( par_salt );
    par_salt = NULL;

    Py_XDECREF( par_r );
    par_r = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported,
        const_str_plain_pbkdf2_hmac_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_eadb4ee42e8556a29a0e4480e7acc57b,
#endif
        codeobj_a866d37a86bedd5cc1a10e95179e0f10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a7328ecdb816372bec3cb1ca678a22bb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac,
        const_str_plain_derive_pbkdf2_hmac,
#if PYTHON_VERSION >= 300
        const_str_digest_ddc4b6aa46809460a2e0c38829ca8bd3,
#endif
        codeobj_637b48315d57a510e6eebb4d2b6a35fc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_5821e221916481c3f38394f7778eebff,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key,
        const_str_plain_generate_rsa_private_key,
#if PYTHON_VERSION >= 300
        const_str_digest_6e975c3005ce9d0aac9bd88f7910c3da,
#endif
        codeobj_d8ecc9a5186c05541894da7033f23dc6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d7343ee22e2272ac73afb381205bd004,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported,
        const_str_plain_rsa_padding_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_18510f252a61499a948652382e1faf94,
#endif
        codeobj_11a39883720d45bccf28fc4c66c0230e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_692d8108005f88d96ef98564f6598985,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported,
        const_str_plain_generate_rsa_parameters_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_81516a1ff2b57afcf142bb8cd8e4cf4b,
#endif
        codeobj_a5f71dfc6c2de05beb2ebba07e4bd799,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_6f04a0ccb7544097cd875c7c31834e6f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers,
        const_str_plain_load_rsa_private_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_61a0b13c29d14e60d13e27fe3fcabb7d,
#endif
        codeobj_8f209d661288424492bd335fa992ab29,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_be2baefacd213848c3218d58e5337d00,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers,
        const_str_plain_load_rsa_public_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_c05e2b69d027322920a7d95b35b10126,
#endif
        codeobj_c8f9a341877d826a98cf3bfff5ed67a6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e05d2a8640d15d821ac8931cff3ceeb6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters,
        const_str_plain_generate_dsa_parameters,
#if PYTHON_VERSION >= 300
        const_str_digest_2112a33833bf0835d01f85452f1ef017,
#endif
        codeobj_f61e9701b644b04de77a806b05c6d486,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_be637128b04df99668b57250bcb90304,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key,
        const_str_plain_generate_dsa_private_key,
#if PYTHON_VERSION >= 300
        const_str_digest_ecf7cddfdd7dec8b835d1f188834882c,
#endif
        codeobj_6fb87992fa498bf7d34b4adfa28955ba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_91cef7da9413817b1df5f9f543c1b117,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters,
        const_str_plain_generate_dsa_private_key_and_parameters,
#if PYTHON_VERSION >= 300
        const_str_digest_f766d6a9c4464307c0995d1178cc0bba,
#endif
        codeobj_fa47d24f4a2a1bc648f905d06b35e7b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e4a6caad51a69cf6559e60044f2d3dbd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported,
        const_str_plain_cipher_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_da416487c64439c0b905a36ebebfdd99,
#endif
        codeobj_3aa86ac328ea5c64506b027c76eabac1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_8184e067c7b3318913c3d0af6b23b2b9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported,
        const_str_plain_dsa_hash_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_7990d9b2c5d411ebc0586c15e0582def,
#endif
        codeobj_70d4388d8a08ef99e42d068c516edc3a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_2f9695857620d6d2233ed0e7e24be4e6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported,
        const_str_plain_dsa_parameters_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_9b3ba72a7d95da27c8479268a79874ec,
#endif
        codeobj_191eeb801543c8463889f74d1414ef72,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a25814a7003287ed48ae69a3e2c8571e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers,
        const_str_plain_load_dsa_private_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_fe72ce46d6560c2e8fe1174440f925b8,
#endif
        codeobj_ca60da712f455b7582e65354cb8aa609,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_71f31f6c62b756a0153edb43b508ea72,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers,
        const_str_plain_load_dsa_public_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_838ca9b3bd6417f22d1fd7753d4ca9b0,
#endif
        codeobj_ee8d0f603afce5a93930ae73991f127a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_1fd991e1ec7a538f20fe33eb5a63c23a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers,
        const_str_plain_load_dsa_parameter_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_ff481c86ef7f2574959a6704954fc569,
#endif
        codeobj_6d7460bd6fcb644e4a4ee8be340ee338,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e9c17f9e6a2cfa9137494e7cce4ddb68,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported,
        const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3,
#if PYTHON_VERSION >= 300
        const_str_digest_f12949b495741f5c79c5f42f6c102606,
#endif
        codeobj_35d983e1878adc747b5b9988abc70c3d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_7b42f6a1029a280baccadb6ba9d7ebc2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported,
        const_str_plain_elliptic_curve_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_36f46d30012dfac1478e9cc097486be1,
#endif
        codeobj_d2e7b1689af77c69fc580dacf2be4ea0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_4ac388cc3596594b9fd1573ef2539537,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key,
        const_str_plain_generate_elliptic_curve_private_key,
#if PYTHON_VERSION >= 300
        const_str_digest_b05edecec0692327d113db121c176a41,
#endif
        codeobj_a5e395a7e2e1e44346027842dd2c0715,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_ea519da6621b2e6e31eb85b5c326163a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers,
        const_str_plain_load_elliptic_curve_public_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_7186644563a7611ac1bbe89086ad0390,
#endif
        codeobj_e4f990ae276e8081a875dec7cb7bd997,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_c0bf5d81d20e7eb0288d1c3ad78eeb28,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers,
        const_str_plain_load_elliptic_curve_private_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_1106e8ed4afc99c4f9cf66a63d4e426d,
#endif
        codeobj_170cfcca2c204baef9741a19d9b7a0c9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_ddd3f25408786f407733d646162f8d59,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx,
        const_str_plain_create_symmetric_encryption_ctx,
#if PYTHON_VERSION >= 300
        const_str_digest_411702a9298f3a6580481a55ab9b9a26,
#endif
        codeobj_75ae6f17147a91f1b96b207fb6aa106e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_39ea98a078b45b6c442185503b966df2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported,
        const_str_digest_19dba398fcfd0968a3203d943a394d68,
#if PYTHON_VERSION >= 300
        const_str_digest_d5feef865a5be1439d94f255821ef2c1,
#endif
        codeobj_82de72e3e97c914922c5a9c67ffe3280,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_ae098508dd4bf88f8bb4a07250bc5a8b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key,
        const_str_plain_derive_elliptic_curve_private_key,
#if PYTHON_VERSION >= 300
        const_str_digest_fef11bb321505374344333b7cea4e0f2,
#endif
        codeobj_d6eb140f61a24d3a0bf64237447ef4d3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_84a9b90f7e986466b5f551b58b5724d7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key,
        const_str_plain_load_pem_private_key,
#if PYTHON_VERSION >= 300
        const_str_digest_4b453a137c85819b12357ec23de919e0,
#endif
        codeobj_935eea2e158af0041e9696d92c68462f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_802d8f8fd7de6f6609d7f954c8f40bf6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key,
        const_str_plain_load_pem_public_key,
#if PYTHON_VERSION >= 300
        const_str_digest_33b1b14451d03f361add6297947e995c,
#endif
        codeobj_3ecd2090542dafc9f341786c950ddb6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_cad1312c0a8ed12faaeb2b2356b3f42c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters,
        const_str_plain_load_pem_parameters,
#if PYTHON_VERSION >= 300
        const_str_digest_2940678556f722c409387e50b7b6f720,
#endif
        codeobj_6267514fbff7dd179c460a7675eec7ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d5ab83d9695f4da166c2e74669073e5a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key,
        const_str_plain_load_der_private_key,
#if PYTHON_VERSION >= 300
        const_str_digest_bf0e2122a539f658a48bcef89877d604,
#endif
        codeobj_97c4c3c4a1f06604d9b9b1cafb32275a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_4d1cd79c69148c2c65a70d73a3298974,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key,
        const_str_plain_load_der_public_key,
#if PYTHON_VERSION >= 300
        const_str_digest_53a083a9ba6ba623d9ca1da980ff8f59,
#endif
        codeobj_d214650e74b0607d57bcc47d3655f3e0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_06e3225334eb391348195f4973a16cbd,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters,
        const_str_plain_load_der_parameters,
#if PYTHON_VERSION >= 300
        const_str_digest_c67aac6a6dd9a1db09eb5b9767b70312,
#endif
        codeobj_c695a223668fcfe3808ff3565bcdaaf9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d57a4d29065ab4a1f221ca9cc91f876b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate,
        const_str_plain_load_pem_x509_certificate,
#if PYTHON_VERSION >= 300
        const_str_digest_fcac789749766281ae7df79b06104ed5,
#endif
        codeobj_f50fe432fc78ac9623251f40001af563,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_3be54078b9bd767d7e0767b5226c3e60,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate,
        const_str_plain_load_der_x509_certificate,
#if PYTHON_VERSION >= 300
        const_str_digest_33d76b6766d04126d26b70e9574220c1,
#endif
        codeobj_3c802451e4bd11252822c2fe9db3d439,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a37049685fe61ee43f425ff3884244a8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx,
        const_str_plain_create_symmetric_decryption_ctx,
#if PYTHON_VERSION >= 300
        const_str_digest_e33630e0c38bffcff23972e2969cd960,
#endif
        codeobj_b357a568d35c1fd984347d38dc5ff1eb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e908e8afe1a83e928d0bef8e329dc68a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr,
        const_str_plain_load_der_x509_csr,
#if PYTHON_VERSION >= 300
        const_str_digest_c41f2130b43138f1ac622def55e7960d,
#endif
        codeobj_3701f736acc84ff56120d698365d8694,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_12bf30ea148596af8b3db51961b172df,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr,
        const_str_plain_load_pem_x509_csr,
#if PYTHON_VERSION >= 300
        const_str_digest_7057df53c8250756158e4b05409a0193,
#endif
        codeobj_6a03c3057b3644cc733d659f18da3f0f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_36ba26e04775ce62acc2dcd612c29d46,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr,
        const_str_plain_create_x509_csr,
#if PYTHON_VERSION >= 300
        const_str_digest_9a2a007b90c3edace6388a2db0d2942e,
#endif
        codeobj_9e226d8449a58dbb180e3345b2465ef9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_7f30278a4fcb72c48b5cd4ea5d079914,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate,
        const_str_plain_create_x509_certificate,
#if PYTHON_VERSION >= 300
        const_str_digest_f3b571290b0071f85349aa1e98deefa1,
#endif
        codeobj_95aa828e58ce13b5cba218ff1f55b78b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_2a51df9642a3dcdb589c8f1b9733a429,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl,
        const_str_plain_create_x509_crl,
#if PYTHON_VERSION >= 300
        const_str_digest_58bcce40198f92624c1420d024d9e742,
#endif
        codeobj_33301d818f6dfff94884d8e0e335413b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_6a83a3310dae744ebfd328dac16db727,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate,
        const_str_plain_create_x509_revoked_certificate,
#if PYTHON_VERSION >= 300
        const_str_digest_d3af1ae38ce39ea25482b1b131316438,
#endif
        codeobj_9475be2e60ac50e8a4658e07c0a43467,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_df210813cecf8d389a6a11cbd910135b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes,
        const_str_plain_x509_name_bytes,
#if PYTHON_VERSION >= 300
        const_str_digest_79acb9468fa8327dea48007c163727a0,
#endif
        codeobj_0a0a1e07acbb09599d7b9714a6cc187c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_25517886b3a6e05088fb43990d2543ca,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters,
        const_str_plain_generate_dh_parameters,
#if PYTHON_VERSION >= 300
        const_str_digest_c7251c4b455903e91a75d8e4d6a9b2de,
#endif
        codeobj_cf14d14e8889cb7d824f7a667c3639f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_3552c2706bf0622b7fcc4e5c6e7975ed,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key,
        const_str_plain_generate_dh_private_key,
#if PYTHON_VERSION >= 300
        const_str_digest_a5ec310bffa4b7282e6e990718c639b5,
#endif
        codeobj_481086cc9e12275deceaa4efc5e70f68,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_4c0fc62fa075fc302d7e12cdc2b1a3c6,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters,
        const_str_plain_generate_dh_private_key_and_parameters,
#if PYTHON_VERSION >= 300
        const_str_digest_b09a78bcdea313fb784b38a1897b608d,
#endif
        codeobj_a297800a4bd05cd209ad6fb396f2869e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_844858cfc3f176cb25cb563fa156777b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported,
        const_str_plain_hash_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_a07055728045b591bf983a61871792e6,
#endif
        codeobj_e34ef1a273b727bddc8c836af39b0f25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_6314fa7c6fc48e2b2c8702ed369f8da8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers,
        const_str_plain_load_dh_private_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_bfd8b0fb9948f86400e1f7813c12d1ab,
#endif
        codeobj_1f0bc59b72a9c1e85d634edf646551d4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_b436da15690b01b9c2fa78c41a227f26,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers,
        const_str_plain_load_dh_public_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_4246db05939576f6276977ea381784ca,
#endif
        codeobj_3fd337ec691690b8b322c6b3c8590dac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_28f4468d6c9734e18c72bd5ca6760f2c,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers,
        const_str_plain_load_dh_parameter_numbers,
#if PYTHON_VERSION >= 300
        const_str_digest_4d12925bf986a554565ceebc784606e4,
#endif
        codeobj_0dfe58a3b79202e92692189a7b6e981d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_d9e232185946daeca898e40c39f68e36,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported,
        const_str_plain_dh_parameters_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_d65ea6744de02ec30f1a7b3161ba6680,
#endif
        codeobj_36b224dfe39da05cef09c604749637b1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_e5bb0ce7e7381f786f9677c69b442e65,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported,
        const_str_plain_dh_x942_serialization_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_e2f41cda08e5fbeb088609dad0cd6bf1,
#endif
        codeobj_0308e589f8afd1388155cd5f66dc56bf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_f0e494b50e5b866fcff26cb8f400c7a1,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt,
        const_str_plain_derive_scrypt,
#if PYTHON_VERSION >= 300
        const_str_digest_292e56cfdf0067098a88b361e7526e04,
#endif
        codeobj_15bab8d0a89bf92341c66cbdd62d390c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_3efa1d11c5d8421580b0e5c4821ccde0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx,
        const_str_plain_create_hash_ctx,
#if PYTHON_VERSION >= 300
        const_str_digest_f4449f1a7d35edeb1549237e6d7fa7b5,
#endif
        codeobj_a6ba6fb2e359f9acf158db182a86b096,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_9d40568e0a0973abf5fe84776e9bb1b7,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported,
        const_str_plain_hmac_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_4a6ebccb61a3ed6f4d87c5a399d52376,
#endif
        codeobj_920708035f9ab808701f889ed9a17327,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_a4c797d45dd48ad8578fe46499751f24,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx,
        const_str_plain_create_hmac_ctx,
#if PYTHON_VERSION >= 300
        const_str_digest_897500164945828209e283a28aa61aa3,
#endif
        codeobj_158955cfb882cd491e4f03b54e3aff55,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_33d14a975b19066b138ce5eafd89cff9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported,
        const_str_plain_cmac_algorithm_supported,
#if PYTHON_VERSION >= 300
        const_str_digest_e6c0eefbbb76d67db8004781dbb68b06,
#endif
        codeobj_b76cfbd90fc60d03ed65685f209b8985,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_8e914904ff9e228505332d098348b4f9,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx,
        const_str_plain_create_cmac_ctx,
#if PYTHON_VERSION >= 300
        const_str_digest_b96d5df8801041201634c50a0b42cbf8,
#endif
        codeobj_c1b40b425197f1cc121028d3b231d3cc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_cryptography$hazmat$backends$interfaces,
        const_str_digest_33d14a975b19066b138ce5eafd89cff9,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_cryptography$hazmat$backends$interfaces =
{
    PyModuleDef_HEAD_INIT,
    "cryptography.hazmat.backends.interfaces",   /* m_name */
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

MOD_INIT_DECL( cryptography$hazmat$backends$interfaces )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_cryptography$hazmat$backends$interfaces );
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
    puts("cryptography.hazmat.backends.interfaces: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.backends.interfaces: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("cryptography.hazmat.backends.interfaces: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcryptography$hazmat$backends$interfaces" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_cryptography$hazmat$backends$interfaces = Py_InitModule4(
        "cryptography.hazmat.backends.interfaces",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_cryptography$hazmat$backends$interfaces = PyModule_Create( &mdef_cryptography$hazmat$backends$interfaces );
#endif

    moduledict_cryptography$hazmat$backends$interfaces = MODULE_DICT( module_cryptography$hazmat$backends$interfaces );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_cryptography$hazmat$backends$interfaces,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_cryptography$hazmat$backends$interfaces,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_cryptography$hazmat$backends$interfaces );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_624798dd704a8f07276d3e75153a7c4b, module_cryptography$hazmat$backends$interfaces );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *outline_10_var___class__ = NULL;
    PyObject *outline_11_var___class__ = NULL;
    PyObject *outline_12_var___class__ = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_11__class_decl_dict = NULL;
    PyObject *tmp_class_creation_11__metaclass = NULL;
    PyObject *tmp_class_creation_11__prepared = NULL;
    PyObject *tmp_class_creation_12__class_decl_dict = NULL;
    PyObject *tmp_class_creation_12__metaclass = NULL;
    PyObject *tmp_class_creation_12__prepared = NULL;
    PyObject *tmp_class_creation_13__class_decl_dict = NULL;
    PyObject *tmp_class_creation_13__metaclass = NULL;
    PyObject *tmp_class_creation_13__prepared = NULL;
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
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
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
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_element_name_38;
    PyObject *tmp_args_element_name_39;
    PyObject *tmp_args_element_name_40;
    PyObject *tmp_args_element_name_41;
    PyObject *tmp_args_element_name_42;
    PyObject *tmp_args_element_name_43;
    PyObject *tmp_args_element_name_44;
    PyObject *tmp_args_element_name_45;
    PyObject *tmp_args_element_name_46;
    PyObject *tmp_args_element_name_47;
    PyObject *tmp_args_element_name_48;
    PyObject *tmp_args_element_name_49;
    PyObject *tmp_args_element_name_50;
    PyObject *tmp_args_element_name_51;
    PyObject *tmp_args_element_name_52;
    PyObject *tmp_args_element_name_53;
    PyObject *tmp_args_element_name_54;
    PyObject *tmp_args_element_name_55;
    PyObject *tmp_args_element_name_56;
    PyObject *tmp_args_element_name_57;
    PyObject *tmp_args_element_name_58;
    PyObject *tmp_args_element_name_59;
    PyObject *tmp_args_element_name_60;
    PyObject *tmp_args_element_name_61;
    PyObject *tmp_args_element_name_62;
    PyObject *tmp_args_element_name_63;
    PyObject *tmp_args_element_name_64;
    PyObject *tmp_args_element_name_65;
    PyObject *tmp_args_element_name_66;
    PyObject *tmp_args_element_name_67;
    PyObject *tmp_args_element_name_68;
    PyObject *tmp_args_element_name_69;
    PyObject *tmp_args_element_name_70;
    PyObject *tmp_args_element_name_71;
    PyObject *tmp_args_element_name_72;
    PyObject *tmp_args_element_name_73;
    PyObject *tmp_args_element_name_74;
    PyObject *tmp_args_element_name_75;
    PyObject *tmp_args_element_name_76;
    PyObject *tmp_args_element_name_77;
    PyObject *tmp_args_element_name_78;
    PyObject *tmp_args_element_name_79;
    PyObject *tmp_args_element_name_80;
    PyObject *tmp_args_element_name_81;
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
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
    PyObject *tmp_args_name_20;
    PyObject *tmp_args_name_21;
    PyObject *tmp_args_name_22;
    PyObject *tmp_args_name_23;
    PyObject *tmp_args_name_24;
    PyObject *tmp_args_name_25;
    PyObject *tmp_args_name_26;
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
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_assign_source_74;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
    PyObject *tmp_bases_name_8;
    PyObject *tmp_bases_name_9;
    PyObject *tmp_bases_name_10;
    PyObject *tmp_bases_name_11;
    PyObject *tmp_bases_name_12;
    PyObject *tmp_bases_name_13;
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
    PyObject *tmp_called_instance_17;
    PyObject *tmp_called_instance_18;
    PyObject *tmp_called_instance_19;
    PyObject *tmp_called_instance_20;
    PyObject *tmp_called_instance_21;
    PyObject *tmp_called_instance_22;
    PyObject *tmp_called_instance_23;
    PyObject *tmp_called_instance_24;
    PyObject *tmp_called_instance_25;
    PyObject *tmp_called_instance_26;
    PyObject *tmp_called_instance_27;
    PyObject *tmp_called_instance_28;
    PyObject *tmp_called_instance_29;
    PyObject *tmp_called_instance_30;
    PyObject *tmp_called_instance_31;
    PyObject *tmp_called_instance_32;
    PyObject *tmp_called_instance_33;
    PyObject *tmp_called_instance_34;
    PyObject *tmp_called_instance_35;
    PyObject *tmp_called_instance_36;
    PyObject *tmp_called_instance_37;
    PyObject *tmp_called_instance_38;
    PyObject *tmp_called_instance_39;
    PyObject *tmp_called_instance_40;
    PyObject *tmp_called_instance_41;
    PyObject *tmp_called_instance_42;
    PyObject *tmp_called_instance_43;
    PyObject *tmp_called_instance_44;
    PyObject *tmp_called_instance_45;
    PyObject *tmp_called_instance_46;
    PyObject *tmp_called_instance_47;
    PyObject *tmp_called_instance_48;
    PyObject *tmp_called_instance_49;
    PyObject *tmp_called_instance_50;
    PyObject *tmp_called_instance_51;
    PyObject *tmp_called_instance_52;
    PyObject *tmp_called_instance_53;
    PyObject *tmp_called_instance_54;
    PyObject *tmp_called_instance_55;
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
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    int tmp_cond_truth_21;
    int tmp_cond_truth_22;
    int tmp_cond_truth_23;
    int tmp_cond_truth_24;
    int tmp_cond_truth_25;
    int tmp_cond_truth_26;
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
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_cond_value_21;
    PyObject *tmp_cond_value_22;
    PyObject *tmp_cond_value_23;
    PyObject *tmp_cond_value_24;
    PyObject *tmp_cond_value_25;
    PyObject *tmp_cond_value_26;
    PyObject *tmp_defaults_1;
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
    PyObject *tmp_dict_name_25;
    PyObject *tmp_dict_name_26;
    PyObject *tmp_dict_name_27;
    PyObject *tmp_dict_name_28;
    PyObject *tmp_dict_name_29;
    PyObject *tmp_dict_name_30;
    PyObject *tmp_dict_name_31;
    PyObject *tmp_dict_name_32;
    PyObject *tmp_dict_name_33;
    PyObject *tmp_dict_name_34;
    PyObject *tmp_dict_name_35;
    PyObject *tmp_dict_name_36;
    PyObject *tmp_dict_name_37;
    PyObject *tmp_dict_name_38;
    PyObject *tmp_dict_name_39;
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
    PyObject *tmp_hasattr_attr_9;
    PyObject *tmp_hasattr_attr_10;
    PyObject *tmp_hasattr_attr_11;
    PyObject *tmp_hasattr_attr_12;
    PyObject *tmp_hasattr_attr_13;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_hasattr_source_9;
    PyObject *tmp_hasattr_source_10;
    PyObject *tmp_hasattr_source_11;
    PyObject *tmp_hasattr_source_12;
    PyObject *tmp_hasattr_source_13;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
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
    PyObject *tmp_key_name_25;
    PyObject *tmp_key_name_26;
    PyObject *tmp_key_name_27;
    PyObject *tmp_key_name_28;
    PyObject *tmp_key_name_29;
    PyObject *tmp_key_name_30;
    PyObject *tmp_key_name_31;
    PyObject *tmp_key_name_32;
    PyObject *tmp_key_name_33;
    PyObject *tmp_key_name_34;
    PyObject *tmp_key_name_35;
    PyObject *tmp_key_name_36;
    PyObject *tmp_key_name_37;
    PyObject *tmp_key_name_38;
    PyObject *tmp_key_name_39;
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
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
    PyObject *tmp_kw_name_20;
    PyObject *tmp_kw_name_21;
    PyObject *tmp_kw_name_22;
    PyObject *tmp_kw_name_23;
    PyObject *tmp_kw_name_24;
    PyObject *tmp_kw_name_25;
    PyObject *tmp_kw_name_26;
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
    PyObject *tmp_metaclass_name_9;
    PyObject *tmp_metaclass_name_10;
    PyObject *tmp_metaclass_name_11;
    PyObject *tmp_metaclass_name_12;
    PyObject *tmp_metaclass_name_13;
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
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    PyObject *tmp_outline_return_value_11;
    PyObject *tmp_outline_return_value_12;
    PyObject *tmp_outline_return_value_13;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    static struct Nuitka_FrameObject *cache_frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 = NULL;

    struct Nuitka_FrameObject *frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2;

    static struct Nuitka_FrameObject *cache_frame_ece01c6951031f827e1085dcf97efc9c_3 = NULL;

    struct Nuitka_FrameObject *frame_ece01c6951031f827e1085dcf97efc9c_3;

    static struct Nuitka_FrameObject *cache_frame_9a557fa4e02021fe921bfc14d8bc3f50_4 = NULL;

    struct Nuitka_FrameObject *frame_9a557fa4e02021fe921bfc14d8bc3f50_4;

    static struct Nuitka_FrameObject *cache_frame_b2289dc3e9b5fd0400c0bfcf35308221_5 = NULL;

    struct Nuitka_FrameObject *frame_b2289dc3e9b5fd0400c0bfcf35308221_5;

    static struct Nuitka_FrameObject *cache_frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 = NULL;

    struct Nuitka_FrameObject *frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6;

    static struct Nuitka_FrameObject *cache_frame_64d85225ba6894586300fc88dd1f533c_7 = NULL;

    struct Nuitka_FrameObject *frame_64d85225ba6894586300fc88dd1f533c_7;

    static struct Nuitka_FrameObject *cache_frame_dece1a7588668ab96ca890beee92deec_8 = NULL;

    struct Nuitka_FrameObject *frame_dece1a7588668ab96ca890beee92deec_8;

    static struct Nuitka_FrameObject *cache_frame_9bf2fbe904e1e56e42c8d240d8831280_9 = NULL;

    struct Nuitka_FrameObject *frame_9bf2fbe904e1e56e42c8d240d8831280_9;

    static struct Nuitka_FrameObject *cache_frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 = NULL;

    struct Nuitka_FrameObject *frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10;

    static struct Nuitka_FrameObject *cache_frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 = NULL;

    struct Nuitka_FrameObject *frame_8e22e07d70547f6ef7c9bebbc9a1448e_11;

    static struct Nuitka_FrameObject *cache_frame_e920632726ca8dfcdf6be4a34e554de8_12 = NULL;

    struct Nuitka_FrameObject *frame_e920632726ca8dfcdf6be4a34e554de8_12;

    static struct Nuitka_FrameObject *cache_frame_ed4e85e8cdc45a45039a4ceb0199227c_13 = NULL;

    struct Nuitka_FrameObject *frame_ed4e85e8cdc45a45039a4ceb0199227c_13;

    static struct Nuitka_FrameObject *cache_frame_d2033cebfae5bd7720a2318489c6bef4_14 = NULL;

    struct Nuitka_FrameObject *frame_d2033cebfae5bd7720a2318489c6bef4_14;

    struct Nuitka_FrameObject *frame_a2f8a590e966b3a16638c31205342ee3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_12 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_13 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_14 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    tmp_outline_return_value_11 = NULL;
    tmp_outline_return_value_12 = NULL;
    tmp_outline_return_value_13 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_34 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_390 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_49 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_276 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_97 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_13 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_80 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_232 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_254 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_132 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_184 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_335 = NULL;
    PyObject *locals_cryptography$hazmat$backends$interfaces_65 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_4 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_4 );
    tmp_import_from_1__module = tmp_assign_source_4;

    // Frame without reuse.
    frame_a2f8a590e966b3a16638c31205342ee3 = MAKE_MODULE_FRAME( codeobj_a2f8a590e966b3a16638c31205342ee3, module_cryptography$hazmat$backends$interfaces );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a2f8a590e966b3a16638c31205342ee3 );
    assert( Py_REFCNT( frame_a2f8a590e966b3a16638c31205342ee3 ) == 2 );

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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_6 );
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
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_7 );
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

    tmp_name_name_1 = const_str_plain_abc;
    tmp_globals_name_1 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 7;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc, tmp_assign_source_8 );
    tmp_name_name_2 = const_str_plain_six;
    tmp_globals_name_2 = (PyObject *)moduledict_cryptography$hazmat$backends$interfaces;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 9;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_9 );
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


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

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


        exception_lineno = 13;

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


        exception_lineno = 13;

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


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

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


        exception_lineno = 13;

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


        exception_lineno = 13;

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


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    tmp_args_name_1 = const_tuple_str_plain_CipherBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 13;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_12 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_12;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;

        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_add_metaclass );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;

        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 12;

        goto try_except_handler_2;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_13 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_13, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    tmp_dictset_value = const_str_plain_CipherBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_13, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2, codeobj_f0e3c48cad3be70afd99ed2bc2bdd3b1, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 = cache_frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_13, const_str_plain_abc );

    if ( tmp_called_instance_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_1 == NULL ))
        {
            tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 14;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_args_element_name_3 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_1_cipher_supported(  );
    frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2->m_frame.f_lineno = 14;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_13, const_str_plain_cipher_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_called_instance_2 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_13, const_str_plain_abc );

    if ( tmp_called_instance_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_2 == NULL ))
        {
            tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 20;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_args_element_name_4 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_2_create_symmetric_encryption_ctx(  );
    frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2->m_frame.f_lineno = 20;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_13, const_str_plain_create_symmetric_encryption_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_called_instance_3 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_13, const_str_plain_abc );

    if ( tmp_called_instance_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_3 == NULL ))
        {
            tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 26;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_args_element_name_5 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_3_create_symmetric_decryption_ctx(  );
    frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2->m_frame.f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_13, const_str_plain_create_symmetric_decryption_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 == cache_frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 )
    {
        Py_DECREF( frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 );
    }
    cache_frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 = NULL;

    assertFrameObject( frame_f0e3c48cad3be70afd99ed2bc2bdd3b1_2 );

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
    tmp_tuple_element_1 = const_str_plain_CipherBackend;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = locals_cryptography$hazmat$backends$interfaces_13;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_1 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 13;
    tmp_assign_source_14 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto try_except_handler_4;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_14;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_4:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_13 );
    locals_cryptography$hazmat$backends$interfaces_13 = NULL;
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

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_13 );
    locals_cryptography$hazmat$backends$interfaces_13 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 13;
    goto try_except_handler_2;
    outline_result_1:;
    tmp_args_element_name_2 = tmp_outline_return_value_1;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 12;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_CipherBackend, tmp_assign_source_13 );
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


        exception_lineno = 34;

        goto try_except_handler_5;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_5;
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
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_5;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_metaclass_name_2 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_2 != NULL );
    Py_INCREF( tmp_metaclass_name_2 );
    condexpr_end_3:;
    tmp_bases_name_2 = const_tuple_type_object_tuple;
    tmp_assign_source_16 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

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


        exception_lineno = 34;

        goto try_except_handler_5;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_5;
    }
    if ( tmp_cond_truth_4 == 1 )
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


        exception_lineno = 34;

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


        exception_lineno = 34;

        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_source_name_4 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_4 );
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___prepare__ );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_5;
    }
    tmp_args_name_3 = const_tuple_str_plain_HashBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 34;
    tmp_assign_source_17 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_5;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_17 = PyDict_New();
    condexpr_end_4:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_17;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;

        goto try_except_handler_5;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_add_metaclass );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;

        goto try_except_handler_5;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 33;

        goto try_except_handler_5;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_called_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_34 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_34, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_7;
    }
    tmp_dictset_value = const_str_plain_HashBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_34, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_7;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_ece01c6951031f827e1085dcf97efc9c_3, codeobj_ece01c6951031f827e1085dcf97efc9c, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_ece01c6951031f827e1085dcf97efc9c_3 = cache_frame_ece01c6951031f827e1085dcf97efc9c_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ece01c6951031f827e1085dcf97efc9c_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ece01c6951031f827e1085dcf97efc9c_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_4 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_34, const_str_plain_abc );

    if ( tmp_called_instance_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_4 == NULL ))
        {
            tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 35;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    tmp_args_element_name_8 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_4_hash_supported(  );
    frame_ece01c6951031f827e1085dcf97efc9c_3->m_frame.f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_34, const_str_plain_hash_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_called_instance_5 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_34, const_str_plain_abc );

    if ( tmp_called_instance_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_5 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_5 == NULL ))
        {
            tmp_called_instance_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 41;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    tmp_args_element_name_9 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_5_create_hash_ctx(  );
    frame_ece01c6951031f827e1085dcf97efc9c_3->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_34, const_str_plain_create_hash_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ece01c6951031f827e1085dcf97efc9c_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ece01c6951031f827e1085dcf97efc9c_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ece01c6951031f827e1085dcf97efc9c_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ece01c6951031f827e1085dcf97efc9c_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ece01c6951031f827e1085dcf97efc9c_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ece01c6951031f827e1085dcf97efc9c_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_ece01c6951031f827e1085dcf97efc9c_3 == cache_frame_ece01c6951031f827e1085dcf97efc9c_3 )
    {
        Py_DECREF( frame_ece01c6951031f827e1085dcf97efc9c_3 );
    }
    cache_frame_ece01c6951031f827e1085dcf97efc9c_3 = NULL;

    assertFrameObject( frame_ece01c6951031f827e1085dcf97efc9c_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_7;
    skip_nested_handling_2:;
    tmp_called_name_8 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_tuple_element_2 = const_str_plain_HashBackend;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = locals_cryptography$hazmat$backends$interfaces_34;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_2 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 34;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto try_except_handler_7;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_19;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_7;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_7:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_34 );
    locals_cryptography$hazmat$backends$interfaces_34 = NULL;
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

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_34 );
    locals_cryptography$hazmat$backends$interfaces_34 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 34;
    goto try_except_handler_5;
    outline_result_2:;
    tmp_args_element_name_7 = tmp_outline_return_value_2;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_HashBackend, tmp_assign_source_18 );
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


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_metaclass_name_3 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_3 != NULL );
    Py_INCREF( tmp_metaclass_name_3 );
    condexpr_end_5:;
    tmp_bases_name_3 = const_tuple_type_object_tuple;
    tmp_assign_source_21 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

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


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    if ( tmp_cond_truth_6 == 1 )
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


        exception_lineno = 49;

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


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_7 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_7 );
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    tmp_args_name_5 = const_tuple_str_plain_HMACBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 49;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_8;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_22 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_22;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;

        goto try_except_handler_8;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_add_metaclass );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_8;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;

        goto try_except_handler_8;
    }

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 48;

        goto try_except_handler_8;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_called_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_8;
    }
    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_49 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_49, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_10;
    }
    tmp_dictset_value = const_str_plain_HMACBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_49, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_10;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_9a557fa4e02021fe921bfc14d8bc3f50_4, codeobj_9a557fa4e02021fe921bfc14d8bc3f50, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_9a557fa4e02021fe921bfc14d8bc3f50_4 = cache_frame_9a557fa4e02021fe921bfc14d8bc3f50_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9a557fa4e02021fe921bfc14d8bc3f50_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9a557fa4e02021fe921bfc14d8bc3f50_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_6 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_49, const_str_plain_abc );

    if ( tmp_called_instance_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_6 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_6 == NULL ))
        {
            tmp_called_instance_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 50;
            type_description_2 = "N";
            goto frame_exception_exit_4;
        }

        }
    }

    tmp_args_element_name_12 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_6_hmac_supported(  );
    frame_9a557fa4e02021fe921bfc14d8bc3f50_4->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_49, const_str_plain_hmac_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_called_instance_7 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_49, const_str_plain_abc );

    if ( tmp_called_instance_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_7 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_7 == NULL ))
        {
            tmp_called_instance_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 57;
            type_description_2 = "N";
            goto frame_exception_exit_4;
        }

        }
    }

    tmp_args_element_name_13 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_7_create_hmac_ctx(  );
    frame_9a557fa4e02021fe921bfc14d8bc3f50_4->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_49, const_str_plain_create_hmac_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a557fa4e02021fe921bfc14d8bc3f50_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9a557fa4e02021fe921bfc14d8bc3f50_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9a557fa4e02021fe921bfc14d8bc3f50_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9a557fa4e02021fe921bfc14d8bc3f50_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9a557fa4e02021fe921bfc14d8bc3f50_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9a557fa4e02021fe921bfc14d8bc3f50_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_9a557fa4e02021fe921bfc14d8bc3f50_4 == cache_frame_9a557fa4e02021fe921bfc14d8bc3f50_4 )
    {
        Py_DECREF( frame_9a557fa4e02021fe921bfc14d8bc3f50_4 );
    }
    cache_frame_9a557fa4e02021fe921bfc14d8bc3f50_4 = NULL;

    assertFrameObject( frame_9a557fa4e02021fe921bfc14d8bc3f50_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_10;
    skip_nested_handling_3:;
    tmp_called_name_12 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_tuple_element_3 = const_str_plain_HMACBackend;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_cryptography$hazmat$backends$interfaces_49;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_3 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 49;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;

        goto try_except_handler_10;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_24;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_10;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_10:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_49 );
    locals_cryptography$hazmat$backends$interfaces_49 = NULL;
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

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_49 );
    locals_cryptography$hazmat$backends$interfaces_49 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_9;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 49;
    goto try_except_handler_8;
    outline_result_3:;
    tmp_args_element_name_11 = tmp_outline_return_value_3;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_HMACBackend, tmp_assign_source_23 );
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


        exception_lineno = 65;

        goto try_except_handler_11;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_11;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_metaclass_name_4 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_4 != NULL );
    Py_INCREF( tmp_metaclass_name_4 );
    condexpr_end_7:;
    tmp_bases_name_4 = const_tuple_type_object_tuple;
    tmp_assign_source_26 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

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


        exception_lineno = 65;

        goto try_except_handler_11;
    }
    tmp_cond_value_8 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_11;
    }
    if ( tmp_cond_truth_8 == 1 )
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


        exception_lineno = 65;

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


        exception_lineno = 65;

        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_source_name_10 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_10 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_11;
    }
    tmp_args_name_7 = const_tuple_str_plain_CMACBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 65;
    tmp_assign_source_27 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_13 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_11;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_27 = PyDict_New();
    condexpr_end_8:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_27;

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;

        goto try_except_handler_11;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_add_metaclass );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_11;
    }
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;

        goto try_except_handler_11;
    }

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 64;

        goto try_except_handler_11;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_called_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_11;
    }
    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_65 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_65, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_13;
    }
    tmp_dictset_value = const_str_plain_CMACBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_65, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_13;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_b2289dc3e9b5fd0400c0bfcf35308221_5, codeobj_b2289dc3e9b5fd0400c0bfcf35308221, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_b2289dc3e9b5fd0400c0bfcf35308221_5 = cache_frame_b2289dc3e9b5fd0400c0bfcf35308221_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b2289dc3e9b5fd0400c0bfcf35308221_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b2289dc3e9b5fd0400c0bfcf35308221_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_8 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_65, const_str_plain_abc );

    if ( tmp_called_instance_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_8 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_8 == NULL ))
        {
            tmp_called_instance_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 66;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    tmp_args_element_name_16 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_8_cmac_algorithm_supported(  );
    frame_b2289dc3e9b5fd0400c0bfcf35308221_5->m_frame.f_lineno = 66;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_65, const_str_plain_cmac_algorithm_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_called_instance_9 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_65, const_str_plain_abc );

    if ( tmp_called_instance_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_9 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_9 == NULL ))
        {
            tmp_called_instance_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 72;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    tmp_args_element_name_17 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_9_create_cmac_ctx(  );
    frame_b2289dc3e9b5fd0400c0bfcf35308221_5->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_65, const_str_plain_create_cmac_ctx, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2289dc3e9b5fd0400c0bfcf35308221_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b2289dc3e9b5fd0400c0bfcf35308221_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b2289dc3e9b5fd0400c0bfcf35308221_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b2289dc3e9b5fd0400c0bfcf35308221_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b2289dc3e9b5fd0400c0bfcf35308221_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b2289dc3e9b5fd0400c0bfcf35308221_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_b2289dc3e9b5fd0400c0bfcf35308221_5 == cache_frame_b2289dc3e9b5fd0400c0bfcf35308221_5 )
    {
        Py_DECREF( frame_b2289dc3e9b5fd0400c0bfcf35308221_5 );
    }
    cache_frame_b2289dc3e9b5fd0400c0bfcf35308221_5 = NULL;

    assertFrameObject( frame_b2289dc3e9b5fd0400c0bfcf35308221_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_13;
    skip_nested_handling_4:;
    tmp_called_name_16 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_tuple_element_4 = const_str_plain_CMACBackend;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_cryptography$hazmat$backends$interfaces_65;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_4 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 65;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_13;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_29;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_13;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_13:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_65 );
    locals_cryptography$hazmat$backends$interfaces_65 = NULL;
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

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_65 );
    locals_cryptography$hazmat$backends$interfaces_65 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 65;
    goto try_except_handler_11;
    outline_result_4:;
    tmp_args_element_name_15 = tmp_outline_return_value_4;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_11;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_CMACBackend, tmp_assign_source_28 );
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


        exception_lineno = 80;

        goto try_except_handler_14;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_14;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_metaclass_name_5 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_5 != NULL );
    Py_INCREF( tmp_metaclass_name_5 );
    condexpr_end_9:;
    tmp_bases_name_5 = const_tuple_type_object_tuple;
    tmp_assign_source_31 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

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


        exception_lineno = 80;

        goto try_except_handler_14;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_10 == 1 )
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


        exception_lineno = 80;

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


        exception_lineno = 80;

        goto try_except_handler_14;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_source_name_13 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_13 );
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_14;
    }
    tmp_args_name_9 = const_tuple_str_plain_PBKDF2HMACBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 80;
    tmp_assign_source_32 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_17 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_14;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_32 = PyDict_New();
    condexpr_end_10:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_32;

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;

        goto try_except_handler_14;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_add_metaclass );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto try_except_handler_14;
    }
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_19 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;

        goto try_except_handler_14;
    }

    tmp_args_element_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );

        exception_lineno = 79;

        goto try_except_handler_14;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_called_name_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto try_except_handler_14;
    }
    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_80 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_80, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_16;
    }
    tmp_dictset_value = const_str_plain_PBKDF2HMACBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_80, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_16;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6, codeobj_3f251b27fa9cbdfd3bdfa26ae962b72f, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 = cache_frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_10 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_80, const_str_plain_abc );

    if ( tmp_called_instance_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_10 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_10 == NULL ))
        {
            tmp_called_instance_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 81;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    tmp_args_element_name_20 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_10_pbkdf2_hmac_supported(  );
    frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6->m_frame.f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_80, const_str_plain_pbkdf2_hmac_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_called_instance_11 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_80, const_str_plain_abc );

    if ( tmp_called_instance_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_11 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_11 == NULL ))
        {
            tmp_called_instance_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 88;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    tmp_args_element_name_21 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_11_derive_pbkdf2_hmac(  );
    frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_80, const_str_plain_derive_pbkdf2_hmac, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 == cache_frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 )
    {
        Py_DECREF( frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 );
    }
    cache_frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 = NULL;

    assertFrameObject( frame_3f251b27fa9cbdfd3bdfa26ae962b72f_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_16;
    skip_nested_handling_5:;
    tmp_called_name_20 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_tuple_element_5 = const_str_plain_PBKDF2HMACBackend;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = locals_cryptography$hazmat$backends$interfaces_80;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_5 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 80;
    tmp_assign_source_34 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;

        goto try_except_handler_16;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_34;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_80 );
    locals_cryptography$hazmat$backends$interfaces_80 = NULL;
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

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_80 );
    locals_cryptography$hazmat$backends$interfaces_80 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 80;
    goto try_except_handler_14;
    outline_result_5:;
    tmp_args_element_name_19 = tmp_outline_return_value_5;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;

        goto try_except_handler_14;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_PBKDF2HMACBackend, tmp_assign_source_33 );
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

    tmp_assign_source_35 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_35;

    // Tried code:
    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_17;
    }
    tmp_cond_value_11 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_17;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_metaclass_name_6 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_6 != NULL );
    Py_INCREF( tmp_metaclass_name_6 );
    condexpr_end_11:;
    tmp_bases_name_6 = const_tuple_type_object_tuple;
    tmp_assign_source_36 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_36;

    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_17;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_12 == 1 )
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


        exception_lineno = 97;

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


        exception_lineno = 97;

        goto try_except_handler_17;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_16 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_16 );
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___prepare__ );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_17;
    }
    tmp_args_name_11 = const_tuple_str_plain_RSABackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 97;
    tmp_assign_source_37 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_21 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_17;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_37 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_37;

    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;

        goto try_except_handler_17;
    }

    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_add_metaclass );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_17;
    }
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_23 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;

        goto try_except_handler_17;
    }

    tmp_args_element_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_23 );

        exception_lineno = 96;

        goto try_except_handler_17;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_called_name_22 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_23, call_args );
    }

    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_17;
    }
    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_97 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_19;
    }
    tmp_dictset_value = const_str_plain_RSABackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_19;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_64d85225ba6894586300fc88dd1f533c_7, codeobj_64d85225ba6894586300fc88dd1f533c, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_64d85225ba6894586300fc88dd1f533c_7 = cache_frame_64d85225ba6894586300fc88dd1f533c_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_64d85225ba6894586300fc88dd1f533c_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_64d85225ba6894586300fc88dd1f533c_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_12 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_abc );

    if ( tmp_called_instance_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_12 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_12 == NULL ))
        {
            tmp_called_instance_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    tmp_args_element_name_24 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_12_generate_rsa_private_key(  );
    frame_64d85225ba6894586300fc88dd1f533c_7->m_frame.f_lineno = 98;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_generate_rsa_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_instance_13 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_abc );

    if ( tmp_called_instance_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_13 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_13 == NULL ))
        {
            tmp_called_instance_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 105;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    tmp_args_element_name_25 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_13_rsa_padding_supported(  );
    frame_64d85225ba6894586300fc88dd1f533c_7->m_frame.f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_13, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_25 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_rsa_padding_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_instance_14 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_abc );

    if ( tmp_called_instance_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_14 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_14 == NULL ))
        {
            tmp_called_instance_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_14 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 111;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    tmp_args_element_name_26 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_14_generate_rsa_parameters_supported(  );
    frame_64d85225ba6894586300fc88dd1f533c_7->m_frame.f_lineno = 111;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_26 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_generate_rsa_parameters_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_instance_15 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_abc );

    if ( tmp_called_instance_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_15 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_15 == NULL ))
        {
            tmp_called_instance_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 118;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    tmp_args_element_name_27 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_15_load_rsa_private_numbers(  );
    frame_64d85225ba6894586300fc88dd1f533c_7->m_frame.f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_15, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_27 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_load_rsa_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_called_instance_16 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_abc );

    if ( tmp_called_instance_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_16 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_16 == NULL ))
        {
            tmp_called_instance_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_16 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 124;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    tmp_args_element_name_28 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_16_load_rsa_public_numbers(  );
    frame_64d85225ba6894586300fc88dd1f533c_7->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_16, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_28 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_97, const_str_plain_load_rsa_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64d85225ba6894586300fc88dd1f533c_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_64d85225ba6894586300fc88dd1f533c_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_64d85225ba6894586300fc88dd1f533c_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_64d85225ba6894586300fc88dd1f533c_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_64d85225ba6894586300fc88dd1f533c_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_64d85225ba6894586300fc88dd1f533c_7,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_64d85225ba6894586300fc88dd1f533c_7 == cache_frame_64d85225ba6894586300fc88dd1f533c_7 )
    {
        Py_DECREF( frame_64d85225ba6894586300fc88dd1f533c_7 );
    }
    cache_frame_64d85225ba6894586300fc88dd1f533c_7 = NULL;

    assertFrameObject( frame_64d85225ba6894586300fc88dd1f533c_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_19;
    skip_nested_handling_6:;
    tmp_called_name_24 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_24 );
    tmp_tuple_element_6 = const_str_plain_RSABackend;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = locals_cryptography$hazmat$backends$interfaces_97;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_6 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 97;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_19;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_39;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_97 );
    locals_cryptography$hazmat$backends$interfaces_97 = NULL;
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

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_97 );
    locals_cryptography$hazmat$backends$interfaces_97 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 97;
    goto try_except_handler_17;
    outline_result_6:;
    tmp_args_element_name_23 = tmp_outline_return_value_6;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_assign_source_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;

        goto try_except_handler_17;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_RSABackend, tmp_assign_source_38 );
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

    tmp_assign_source_40 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_40;

    // Tried code:
    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_20;
    }
    tmp_cond_value_13 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_20;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_20;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_metaclass_name_7 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_7 != NULL );
    Py_INCREF( tmp_metaclass_name_7 );
    condexpr_end_13:;
    tmp_bases_name_7 = const_tuple_type_object_tuple;
    tmp_assign_source_41 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    Py_DECREF( tmp_metaclass_name_7 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_41;

    tmp_key_name_21 = const_str_plain_metaclass;
    tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_20;
    }
    tmp_cond_value_14 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_20;
    }
    if ( tmp_cond_truth_14 == 1 )
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


        exception_lineno = 132;

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


        exception_lineno = 132;

        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_source_name_19 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_source_name_19 );
    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain___prepare__ );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_20;
    }
    tmp_args_name_13 = const_tuple_str_plain_DSABackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 132;
    tmp_assign_source_42 = CALL_FUNCTION( tmp_called_name_25, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_25 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_20;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_assign_source_42 = PyDict_New();
    condexpr_end_14:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_42;

    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;

        goto try_except_handler_20;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_add_metaclass );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_20;
    }
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;

        goto try_except_handler_20;
    }

    tmp_args_element_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_27 );

        exception_lineno = 131;

        goto try_except_handler_20;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_called_name_26 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    Py_DECREF( tmp_args_element_name_29 );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_20;
    }
    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_132 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_22;
    }
    tmp_dictset_value = const_str_plain_DSABackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_22;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_dece1a7588668ab96ca890beee92deec_8, codeobj_dece1a7588668ab96ca890beee92deec, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_dece1a7588668ab96ca890beee92deec_8 = cache_frame_dece1a7588668ab96ca890beee92deec_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dece1a7588668ab96ca890beee92deec_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dece1a7588668ab96ca890beee92deec_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_17 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_abc );

    if ( tmp_called_instance_17 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_17 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_17 == NULL ))
        {
            tmp_called_instance_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_17 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 133;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    tmp_args_element_name_31 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_17_generate_dsa_parameters(  );
    frame_dece1a7588668ab96ca890beee92deec_8->m_frame.f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_17, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_31 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_generate_dsa_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_called_instance_18 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_abc );

    if ( tmp_called_instance_18 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_18 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_18 == NULL ))
        {
            tmp_called_instance_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    tmp_args_element_name_32 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_18_generate_dsa_private_key(  );
    frame_dece1a7588668ab96ca890beee92deec_8->m_frame.f_lineno = 139;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_18, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_32 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_generate_dsa_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_called_instance_19 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_abc );

    if ( tmp_called_instance_19 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_19 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_19 == NULL ))
        {
            tmp_called_instance_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_19 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    tmp_args_element_name_33 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_19_generate_dsa_private_key_and_parameters(  );
    frame_dece1a7588668ab96ca890beee92deec_8->m_frame.f_lineno = 146;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_19, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_33 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_generate_dsa_private_key_and_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 146;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_called_instance_20 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_abc );

    if ( tmp_called_instance_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_20 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_20 == NULL ))
        {
            tmp_called_instance_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_20 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    tmp_args_element_name_34 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_20_dsa_hash_supported(  );
    frame_dece1a7588668ab96ca890beee92deec_8->m_frame.f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_20, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_34 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_dsa_hash_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_called_instance_21 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_abc );

    if ( tmp_called_instance_21 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_21 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_21 == NULL ))
        {
            tmp_called_instance_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_21 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 158;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    tmp_args_element_name_35 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_21_dsa_parameters_supported(  );
    frame_dece1a7588668ab96ca890beee92deec_8->m_frame.f_lineno = 158;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_21, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_35 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_dsa_parameters_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_called_instance_22 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_abc );

    if ( tmp_called_instance_22 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_22 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_22 == NULL ))
        {
            tmp_called_instance_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_22 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    tmp_args_element_name_36 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_22_load_dsa_private_numbers(  );
    frame_dece1a7588668ab96ca890beee92deec_8->m_frame.f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_22, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_36 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_load_dsa_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_called_instance_23 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_abc );

    if ( tmp_called_instance_23 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_23 == NULL ))
        {
            tmp_called_instance_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_23 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 170;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    tmp_args_element_name_37 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_23_load_dsa_public_numbers(  );
    frame_dece1a7588668ab96ca890beee92deec_8->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_23, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_37 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_load_dsa_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_called_instance_24 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_abc );

    if ( tmp_called_instance_24 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_24 == NULL ))
        {
            tmp_called_instance_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_24 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 176;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    tmp_args_element_name_38 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_24_load_dsa_parameter_numbers(  );
    frame_dece1a7588668ab96ca890beee92deec_8->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_38 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_24, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_38 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_132, const_str_plain_load_dsa_parameter_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dece1a7588668ab96ca890beee92deec_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dece1a7588668ab96ca890beee92deec_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dece1a7588668ab96ca890beee92deec_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dece1a7588668ab96ca890beee92deec_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dece1a7588668ab96ca890beee92deec_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dece1a7588668ab96ca890beee92deec_8,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_dece1a7588668ab96ca890beee92deec_8 == cache_frame_dece1a7588668ab96ca890beee92deec_8 )
    {
        Py_DECREF( frame_dece1a7588668ab96ca890beee92deec_8 );
    }
    cache_frame_dece1a7588668ab96ca890beee92deec_8 = NULL;

    assertFrameObject( frame_dece1a7588668ab96ca890beee92deec_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_22;
    skip_nested_handling_7:;
    tmp_called_name_28 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_28 );
    tmp_tuple_element_7 = const_str_plain_DSABackend;
    tmp_args_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_7 );
    tmp_tuple_element_7 = locals_cryptography$hazmat$backends$interfaces_132;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_7 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 132;
    tmp_assign_source_44 = CALL_FUNCTION( tmp_called_name_28, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;

        goto try_except_handler_22;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_44;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_132 );
    locals_cryptography$hazmat$backends$interfaces_132 = NULL;
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

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_132 );
    locals_cryptography$hazmat$backends$interfaces_132 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_21;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 132;
    goto try_except_handler_20;
    outline_result_7:;
    tmp_args_element_name_30 = tmp_outline_return_value_7;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_assign_source_43 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    Py_DECREF( tmp_args_element_name_30 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;

        goto try_except_handler_20;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_DSABackend, tmp_assign_source_43 );
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

    tmp_assign_source_45 = PyDict_New();
    assert( tmp_class_creation_8__class_decl_dict == NULL );
    tmp_class_creation_8__class_decl_dict = tmp_assign_source_45;

    // Tried code:
    tmp_key_name_22 = const_str_plain_metaclass;
    tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_22 );
    tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_23;
    }
    tmp_cond_value_15 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_23;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_23 );
    tmp_key_name_23 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_23;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_metaclass_name_8 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_8 != NULL );
    Py_INCREF( tmp_metaclass_name_8 );
    condexpr_end_15:;
    tmp_bases_name_8 = const_tuple_type_object_tuple;
    tmp_assign_source_46 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    Py_DECREF( tmp_metaclass_name_8 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_23;
    }
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_46;

    tmp_key_name_24 = const_str_plain_metaclass;
    tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_24 );
    tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_23;
    }
    tmp_cond_value_16 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_23;
    }
    if ( tmp_cond_truth_16 == 1 )
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


        exception_lineno = 184;

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


        exception_lineno = 184;

        goto try_except_handler_23;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_source_name_22 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_source_name_22 );
    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain___prepare__ );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_23;
    }
    tmp_args_name_15 = const_tuple_str_plain_EllipticCurveBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_15 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 184;
    tmp_assign_source_47 = CALL_FUNCTION( tmp_called_name_29, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_29 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_23;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_assign_source_47 = PyDict_New();
    condexpr_end_16:;
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_47;

    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;

        goto try_except_handler_23;
    }

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_add_metaclass );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;

        goto try_except_handler_23;
    }

    tmp_args_element_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_31 );

        exception_lineno = 183;

        goto try_except_handler_23;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_args_element_name_39 };
        tmp_called_name_30 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    Py_DECREF( tmp_args_element_name_39 );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    tmp_set_locals = tmp_class_creation_8__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_184 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_25;
    }
    tmp_dictset_value = const_str_plain_EllipticCurveBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_25;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_9bf2fbe904e1e56e42c8d240d8831280_9, codeobj_9bf2fbe904e1e56e42c8d240d8831280, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_9bf2fbe904e1e56e42c8d240d8831280_9 = cache_frame_9bf2fbe904e1e56e42c8d240d8831280_9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9bf2fbe904e1e56e42c8d240d8831280_9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9bf2fbe904e1e56e42c8d240d8831280_9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_25 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_abc );

    if ( tmp_called_instance_25 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_25 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_25 == NULL ))
        {
            tmp_called_instance_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_25 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 185;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    tmp_args_element_name_41 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_25_elliptic_curve_signature_algorithm_supported(  );
    frame_9bf2fbe904e1e56e42c8d240d8831280_9->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_41 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_25, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_41 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_digest_dd100ab5223cfe86cc19d075c4c9e8d3, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_called_instance_26 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_abc );

    if ( tmp_called_instance_26 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_26 == NULL ))
        {
            tmp_called_instance_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 194;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    tmp_args_element_name_42 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_26_elliptic_curve_supported(  );
    frame_9bf2fbe904e1e56e42c8d240d8831280_9->m_frame.f_lineno = 194;
    {
        PyObject *call_args[] = { tmp_args_element_name_42 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_26, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_42 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_elliptic_curve_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_called_instance_27 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_abc );

    if ( tmp_called_instance_27 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_27 == NULL ))
        {
            tmp_called_instance_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 200;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    tmp_args_element_name_43 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_27_generate_elliptic_curve_private_key(  );
    frame_9bf2fbe904e1e56e42c8d240d8831280_9->m_frame.f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_args_element_name_43 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_27, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_43 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_generate_elliptic_curve_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_called_instance_28 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_abc );

    if ( tmp_called_instance_28 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_28 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_28 == NULL ))
        {
            tmp_called_instance_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 206;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    tmp_args_element_name_44 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_28_load_elliptic_curve_public_numbers(  );
    frame_9bf2fbe904e1e56e42c8d240d8831280_9->m_frame.f_lineno = 206;
    {
        PyObject *call_args[] = { tmp_args_element_name_44 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_28, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_44 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_load_elliptic_curve_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_called_instance_29 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_abc );

    if ( tmp_called_instance_29 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_29 == NULL ))
        {
            tmp_called_instance_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 212;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    tmp_args_element_name_45 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_29_load_elliptic_curve_private_numbers(  );
    frame_9bf2fbe904e1e56e42c8d240d8831280_9->m_frame.f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_45 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_29, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_45 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_load_elliptic_curve_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_called_instance_30 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_abc );

    if ( tmp_called_instance_30 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_30 == NULL ))
        {
            tmp_called_instance_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_30 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 218;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    tmp_args_element_name_46 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_30_elliptic_curve_exchange_algorithm_supported(  );
    frame_9bf2fbe904e1e56e42c8d240d8831280_9->m_frame.f_lineno = 218;
    {
        PyObject *call_args[] = { tmp_args_element_name_46 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_30, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_46 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_digest_19dba398fcfd0968a3203d943a394d68, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_called_instance_31 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_abc );

    if ( tmp_called_instance_31 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_31 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_31 == NULL ))
        {
            tmp_called_instance_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_31 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 224;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    tmp_args_element_name_47 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_31_derive_elliptic_curve_private_key(  );
    frame_9bf2fbe904e1e56e42c8d240d8831280_9->m_frame.f_lineno = 224;
    {
        PyObject *call_args[] = { tmp_args_element_name_47 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_31, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_47 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_184, const_str_plain_derive_elliptic_curve_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bf2fbe904e1e56e42c8d240d8831280_9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;

    frame_exception_exit_9:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bf2fbe904e1e56e42c8d240d8831280_9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9bf2fbe904e1e56e42c8d240d8831280_9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9bf2fbe904e1e56e42c8d240d8831280_9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9bf2fbe904e1e56e42c8d240d8831280_9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9bf2fbe904e1e56e42c8d240d8831280_9,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_9bf2fbe904e1e56e42c8d240d8831280_9 == cache_frame_9bf2fbe904e1e56e42c8d240d8831280_9 )
    {
        Py_DECREF( frame_9bf2fbe904e1e56e42c8d240d8831280_9 );
    }
    cache_frame_9bf2fbe904e1e56e42c8d240d8831280_9 = NULL;

    assertFrameObject( frame_9bf2fbe904e1e56e42c8d240d8831280_9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_8;

    frame_no_exception_8:;

    goto skip_nested_handling_8;
    nested_frame_exit_8:;

    goto try_except_handler_25;
    skip_nested_handling_8:;
    tmp_called_name_32 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_32 );
    tmp_tuple_element_8 = const_str_plain_EllipticCurveBackend;
    tmp_args_name_16 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_8 );
    tmp_tuple_element_8 = locals_cryptography$hazmat$backends$interfaces_184;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_8 );
    tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_16 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 184;
    tmp_assign_source_49 = CALL_FUNCTION( tmp_called_name_32, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_25;
    }
    assert( outline_7_var___class__ == NULL );
    outline_7_var___class__ = tmp_assign_source_49;

    tmp_outline_return_value_8 = outline_7_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_8 );
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_25;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_25:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_184 );
    locals_cryptography$hazmat$backends$interfaces_184 = NULL;
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

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_184 );
    locals_cryptography$hazmat$backends$interfaces_184 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_24;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
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
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 184;
    goto try_except_handler_23;
    outline_result_8:;
    tmp_args_element_name_40 = tmp_outline_return_value_8;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_args_element_name_40 };
        tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    Py_DECREF( tmp_args_element_name_40 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto try_except_handler_23;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_EllipticCurveBackend, tmp_assign_source_48 );
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

    tmp_assign_source_50 = PyDict_New();
    assert( tmp_class_creation_9__class_decl_dict == NULL );
    tmp_class_creation_9__class_decl_dict = tmp_assign_source_50;

    // Tried code:
    tmp_key_name_25 = const_str_plain_metaclass;
    tmp_dict_name_25 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_25 );
    tmp_res = PyDict_Contains( tmp_dict_name_25, tmp_key_name_25 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    tmp_cond_value_17 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_dict_name_26 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_26 );
    tmp_key_name_26 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_metaclass_name_9 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_9 != NULL );
    Py_INCREF( tmp_metaclass_name_9 );
    condexpr_end_17:;
    tmp_bases_name_9 = const_tuple_type_object_tuple;
    tmp_assign_source_51 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    Py_DECREF( tmp_metaclass_name_9 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_51;

    tmp_key_name_27 = const_str_plain_metaclass;
    tmp_dict_name_27 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_27 );
    tmp_res = PyDict_Contains( tmp_dict_name_27, tmp_key_name_27 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    tmp_cond_value_18 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    branch_no_9:;
    tmp_hasattr_source_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_9 );
    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_25 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_source_name_25 );
    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain___prepare__ );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    tmp_args_name_17 = const_tuple_str_plain_PEMSerializationBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_17 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 232;
    tmp_assign_source_52 = CALL_FUNCTION( tmp_called_name_33, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_33 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_26;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_52 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_9__prepared == NULL );
    tmp_class_creation_9__prepared = tmp_assign_source_52;

    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;

        goto try_except_handler_26;
    }

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_add_metaclass );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_26;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;

        goto try_except_handler_26;
    }

    tmp_args_element_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_35 );

        exception_lineno = 231;

        goto try_except_handler_26;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_48 };
        tmp_called_name_34 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    Py_DECREF( tmp_args_element_name_48 );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_26;
    }
    tmp_set_locals = tmp_class_creation_9__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_232 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_232, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_28;
    }
    tmp_dictset_value = const_str_plain_PEMSerializationBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_232, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_28;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10, codeobj_29a30cbf5f7e01fc2c0c4d5156bf3495, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 = cache_frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_32 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_232, const_str_plain_abc );

    if ( tmp_called_instance_32 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_32 == NULL ))
        {
            tmp_called_instance_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 233;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    tmp_args_element_name_50 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_32_load_pem_private_key(  );
    frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10->m_frame.f_lineno = 233;
    {
        PyObject *call_args[] = { tmp_args_element_name_50 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_32, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_50 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_232, const_str_plain_load_pem_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }
    tmp_called_instance_33 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_232, const_str_plain_abc );

    if ( tmp_called_instance_33 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_33 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_33 == NULL ))
        {
            tmp_called_instance_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_33 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 240;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    tmp_args_element_name_51 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_33_load_pem_public_key(  );
    frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10->m_frame.f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_args_element_name_51 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_33, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_51 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_232, const_str_plain_load_pem_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }
    tmp_called_instance_34 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_232, const_str_plain_abc );

    if ( tmp_called_instance_34 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_34 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_34 == NULL ))
        {
            tmp_called_instance_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_34 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 246;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    tmp_args_element_name_52 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_34_load_pem_parameters(  );
    frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10->m_frame.f_lineno = 246;
    {
        PyObject *call_args[] = { tmp_args_element_name_52 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_34, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_52 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_232, const_str_plain_load_pem_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;

    frame_exception_exit_10:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 == cache_frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 )
    {
        Py_DECREF( frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 );
    }
    cache_frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 = NULL;

    assertFrameObject( frame_29a30cbf5f7e01fc2c0c4d5156bf3495_10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_9;

    frame_no_exception_9:;

    goto skip_nested_handling_9;
    nested_frame_exit_9:;

    goto try_except_handler_28;
    skip_nested_handling_9:;
    tmp_called_name_36 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_36 );
    tmp_tuple_element_9 = const_str_plain_PEMSerializationBackend;
    tmp_args_name_18 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_9 );
    tmp_tuple_element_9 = locals_cryptography$hazmat$backends$interfaces_232;
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_9 );
    tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_18 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 232;
    tmp_assign_source_54 = CALL_FUNCTION( tmp_called_name_36, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;

        goto try_except_handler_28;
    }
    assert( outline_8_var___class__ == NULL );
    outline_8_var___class__ = tmp_assign_source_54;

    tmp_outline_return_value_9 = outline_8_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_9 );
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_28;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_28:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_232 );
    locals_cryptography$hazmat$backends$interfaces_232 = NULL;
    goto try_return_handler_27;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_232 );
    locals_cryptography$hazmat$backends$interfaces_232 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_27;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_27:;
    CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
    Py_DECREF( outline_8_var___class__ );
    outline_8_var___class__ = NULL;

    goto outline_result_9;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 232;
    goto try_except_handler_26;
    outline_result_9:;
    tmp_args_element_name_49 = tmp_outline_return_value_9;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_49 };
        tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    Py_DECREF( tmp_args_element_name_49 );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;

        goto try_except_handler_26;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_PEMSerializationBackend, tmp_assign_source_53 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_decl_dict );
    Py_DECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_decl_dict );
    Py_DECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__prepared );
    Py_DECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    tmp_assign_source_55 = PyDict_New();
    assert( tmp_class_creation_10__class_decl_dict == NULL );
    tmp_class_creation_10__class_decl_dict = tmp_assign_source_55;

    // Tried code:
    tmp_key_name_28 = const_str_plain_metaclass;
    tmp_dict_name_28 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_28 );
    tmp_res = PyDict_Contains( tmp_dict_name_28, tmp_key_name_28 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    tmp_cond_value_19 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_29 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_29 );
    tmp_key_name_29 = const_str_plain_metaclass;
    tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_metaclass_name_10 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_10 != NULL );
    Py_INCREF( tmp_metaclass_name_10 );
    condexpr_end_19:;
    tmp_bases_name_10 = const_tuple_type_object_tuple;
    tmp_assign_source_56 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
    Py_DECREF( tmp_metaclass_name_10 );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_56;

    tmp_key_name_30 = const_str_plain_metaclass;
    tmp_dict_name_30 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_30 );
    tmp_res = PyDict_Contains( tmp_dict_name_30, tmp_key_name_30 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    tmp_cond_value_20 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    branch_no_10:;
    tmp_hasattr_source_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_10 );
    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_source_name_28 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_source_name_28 );
    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain___prepare__ );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    tmp_args_name_19 = const_tuple_str_plain_DERSerializationBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_19 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_19 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 254;
    tmp_assign_source_57 = CALL_FUNCTION( tmp_called_name_37, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_37 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_29;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_assign_source_57 = PyDict_New();
    condexpr_end_20:;
    assert( tmp_class_creation_10__prepared == NULL );
    tmp_class_creation_10__prepared = tmp_assign_source_57;

    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;

        goto try_except_handler_29;
    }

    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_add_metaclass );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_29;
    }
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_39 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 253;

        goto try_except_handler_29;
    }

    tmp_args_element_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_39 );

        exception_lineno = 253;

        goto try_except_handler_29;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_53 };
        tmp_called_name_38 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_called_name_39 );
    Py_DECREF( tmp_args_element_name_53 );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_29;
    }
    tmp_set_locals = tmp_class_creation_10__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_254 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_254, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_31;
    }
    tmp_dictset_value = const_str_plain_DERSerializationBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_254, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_31;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_8e22e07d70547f6ef7c9bebbc9a1448e_11, codeobj_8e22e07d70547f6ef7c9bebbc9a1448e, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 = cache_frame_8e22e07d70547f6ef7c9bebbc9a1448e_11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_35 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_254, const_str_plain_abc );

    if ( tmp_called_instance_35 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_35 == NULL ))
        {
            tmp_called_instance_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_35 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 255;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    tmp_args_element_name_55 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_35_load_der_private_key(  );
    frame_8e22e07d70547f6ef7c9bebbc9a1448e_11->m_frame.f_lineno = 255;
    {
        PyObject *call_args[] = { tmp_args_element_name_55 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_35, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_55 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_2 = "N";
        goto frame_exception_exit_11;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_254, const_str_plain_load_der_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        type_description_2 = "N";
        goto frame_exception_exit_11;
    }
    tmp_called_instance_36 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_254, const_str_plain_abc );

    if ( tmp_called_instance_36 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_36 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_36 == NULL ))
        {
            tmp_called_instance_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_36 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 262;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    tmp_args_element_name_56 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_36_load_der_public_key(  );
    frame_8e22e07d70547f6ef7c9bebbc9a1448e_11->m_frame.f_lineno = 262;
    {
        PyObject *call_args[] = { tmp_args_element_name_56 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_36, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_56 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_2 = "N";
        goto frame_exception_exit_11;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_254, const_str_plain_load_der_public_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_2 = "N";
        goto frame_exception_exit_11;
    }
    tmp_called_instance_37 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_254, const_str_plain_abc );

    if ( tmp_called_instance_37 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_37 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_37 == NULL ))
        {
            tmp_called_instance_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_37 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 268;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    tmp_args_element_name_57 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_37_load_der_parameters(  );
    frame_8e22e07d70547f6ef7c9bebbc9a1448e_11->m_frame.f_lineno = 268;
    {
        PyObject *call_args[] = { tmp_args_element_name_57 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_37, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_57 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_2 = "N";
        goto frame_exception_exit_11;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_254, const_str_plain_load_der_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        type_description_2 = "N";
        goto frame_exception_exit_11;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_10;

    frame_exception_exit_11:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8e22e07d70547f6ef7c9bebbc9a1448e_11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8e22e07d70547f6ef7c9bebbc9a1448e_11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8e22e07d70547f6ef7c9bebbc9a1448e_11, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8e22e07d70547f6ef7c9bebbc9a1448e_11,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 == cache_frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 )
    {
        Py_DECREF( frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 );
    }
    cache_frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 = NULL;

    assertFrameObject( frame_8e22e07d70547f6ef7c9bebbc9a1448e_11 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_10;

    frame_no_exception_10:;

    goto skip_nested_handling_10;
    nested_frame_exit_10:;

    goto try_except_handler_31;
    skip_nested_handling_10:;
    tmp_called_name_40 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_40 );
    tmp_tuple_element_10 = const_str_plain_DERSerializationBackend;
    tmp_args_name_20 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = locals_cryptography$hazmat$backends$interfaces_254;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_20, 2, tmp_tuple_element_10 );
    tmp_kw_name_20 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_20 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 254;
    tmp_assign_source_59 = CALL_FUNCTION( tmp_called_name_40, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_args_name_20 );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;

        goto try_except_handler_31;
    }
    assert( outline_9_var___class__ == NULL );
    outline_9_var___class__ = tmp_assign_source_59;

    tmp_outline_return_value_10 = outline_9_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_10 );
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_31;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_31:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_254 );
    locals_cryptography$hazmat$backends$interfaces_254 = NULL;
    goto try_return_handler_30;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_254 );
    locals_cryptography$hazmat$backends$interfaces_254 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_30;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    CHECK_OBJECT( (PyObject *)outline_9_var___class__ );
    Py_DECREF( outline_9_var___class__ );
    outline_9_var___class__ = NULL;

    goto outline_result_10;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto outline_exception_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_10:;
    exception_lineno = 254;
    goto try_except_handler_29;
    outline_result_10:;
    tmp_args_element_name_54 = tmp_outline_return_value_10;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_args_element_name_54 };
        tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    Py_DECREF( tmp_args_element_name_54 );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;

        goto try_except_handler_29;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_DERSerializationBackend, tmp_assign_source_58 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_decl_dict );
    Py_DECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_decl_dict );
    Py_DECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__prepared );
    Py_DECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    tmp_assign_source_60 = PyDict_New();
    assert( tmp_class_creation_11__class_decl_dict == NULL );
    tmp_class_creation_11__class_decl_dict = tmp_assign_source_60;

    // Tried code:
    tmp_key_name_31 = const_str_plain_metaclass;
    tmp_dict_name_31 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_31 );
    tmp_res = PyDict_Contains( tmp_dict_name_31, tmp_key_name_31 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    tmp_cond_value_21 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_21 = CHECK_IF_TRUE( tmp_cond_value_21 );
    if ( tmp_cond_truth_21 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    if ( tmp_cond_truth_21 == 1 )
    {
        goto condexpr_true_21;
    }
    else
    {
        goto condexpr_false_21;
    }
    condexpr_true_21:;
    tmp_dict_name_32 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_32 );
    tmp_key_name_32 = const_str_plain_metaclass;
    tmp_metaclass_name_11 = DICT_GET_ITEM( tmp_dict_name_32, tmp_key_name_32 );
    if ( tmp_metaclass_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    goto condexpr_end_21;
    condexpr_false_21:;
    tmp_metaclass_name_11 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_11 != NULL );
    Py_INCREF( tmp_metaclass_name_11 );
    condexpr_end_21:;
    tmp_bases_name_11 = const_tuple_type_object_tuple;
    tmp_assign_source_61 = SELECT_METACLASS( tmp_metaclass_name_11, tmp_bases_name_11 );
    Py_DECREF( tmp_metaclass_name_11 );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    assert( tmp_class_creation_11__metaclass == NULL );
    tmp_class_creation_11__metaclass = tmp_assign_source_61;

    tmp_key_name_33 = const_str_plain_metaclass;
    tmp_dict_name_33 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_33 );
    tmp_res = PyDict_Contains( tmp_dict_name_33, tmp_key_name_33 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    tmp_cond_value_22 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_22 = CHECK_IF_TRUE( tmp_cond_value_22 );
    if ( tmp_cond_truth_22 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    if ( tmp_cond_truth_22 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_dictdel_dict = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    branch_no_11:;
    tmp_hasattr_source_11 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_11 );
    tmp_hasattr_attr_11 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_11, tmp_hasattr_attr_11 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_22;
    }
    else
    {
        goto condexpr_false_22;
    }
    condexpr_true_22:;
    tmp_source_name_31 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_source_name_31 );
    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain___prepare__ );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    tmp_args_name_21 = const_tuple_str_plain_X509Backend_tuple_type_object_tuple_tuple;
    tmp_kw_name_21 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_21 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 276;
    tmp_assign_source_62 = CALL_FUNCTION( tmp_called_name_41, tmp_args_name_21, tmp_kw_name_21 );
    Py_DECREF( tmp_called_name_41 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_32;
    }
    goto condexpr_end_22;
    condexpr_false_22:;
    tmp_assign_source_62 = PyDict_New();
    condexpr_end_22:;
    assert( tmp_class_creation_11__prepared == NULL );
    tmp_class_creation_11__prepared = tmp_assign_source_62;

    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_32 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;

        goto try_except_handler_32;
    }

    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_add_metaclass );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;

        goto try_except_handler_32;
    }
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_43 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;

        goto try_except_handler_32;
    }

    tmp_args_element_name_58 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_43 );

        exception_lineno = 275;

        goto try_except_handler_32;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 275;
    {
        PyObject *call_args[] = { tmp_args_element_name_58 };
        tmp_called_name_42 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_called_name_43 );
    Py_DECREF( tmp_args_element_name_58 );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;

        goto try_except_handler_32;
    }
    tmp_set_locals = tmp_class_creation_11__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_276 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_34;
    }
    tmp_dictset_value = const_str_plain_X509Backend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_34;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_e920632726ca8dfcdf6be4a34e554de8_12, codeobj_e920632726ca8dfcdf6be4a34e554de8, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_e920632726ca8dfcdf6be4a34e554de8_12 = cache_frame_e920632726ca8dfcdf6be4a34e554de8_12;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e920632726ca8dfcdf6be4a34e554de8_12 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e920632726ca8dfcdf6be4a34e554de8_12 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_38 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_abc );

    if ( tmp_called_instance_38 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_38 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_38 == NULL ))
        {
            tmp_called_instance_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_38 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 277;
            type_description_2 = "N";
            goto frame_exception_exit_12;
        }

        }
    }

    tmp_args_element_name_60 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_38_load_pem_x509_certificate(  );
    frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame.f_lineno = 277;
    {
        PyObject *call_args[] = { tmp_args_element_name_60 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_38, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_60 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_load_pem_x509_certificate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_called_instance_39 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_abc );

    if ( tmp_called_instance_39 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_39 == NULL ))
        {
            tmp_called_instance_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_39 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 283;
            type_description_2 = "N";
            goto frame_exception_exit_12;
        }

        }
    }

    tmp_args_element_name_61 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_39_load_der_x509_certificate(  );
    frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame.f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_61 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_39, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_61 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_load_der_x509_certificate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_called_instance_40 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_abc );

    if ( tmp_called_instance_40 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_40 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_40 == NULL ))
        {
            tmp_called_instance_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_40 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 289;
            type_description_2 = "N";
            goto frame_exception_exit_12;
        }

        }
    }

    tmp_args_element_name_62 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_40_load_der_x509_csr(  );
    frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame.f_lineno = 289;
    {
        PyObject *call_args[] = { tmp_args_element_name_62 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_40, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_62 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_load_der_x509_csr, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_called_instance_41 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_abc );

    if ( tmp_called_instance_41 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_41 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_41 == NULL ))
        {
            tmp_called_instance_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_41 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 295;
            type_description_2 = "N";
            goto frame_exception_exit_12;
        }

        }
    }

    tmp_args_element_name_63 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_41_load_pem_x509_csr(  );
    frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame.f_lineno = 295;
    {
        PyObject *call_args[] = { tmp_args_element_name_63 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_41, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_63 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_load_pem_x509_csr, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_called_instance_42 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_abc );

    if ( tmp_called_instance_42 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_42 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_42 == NULL ))
        {
            tmp_called_instance_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_42 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 301;
            type_description_2 = "N";
            goto frame_exception_exit_12;
        }

        }
    }

    tmp_args_element_name_64 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_42_create_x509_csr(  );
    frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame.f_lineno = 301;
    {
        PyObject *call_args[] = { tmp_args_element_name_64 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_42, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_64 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_create_x509_csr, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_called_instance_43 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_abc );

    if ( tmp_called_instance_43 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_43 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_43 == NULL ))
        {
            tmp_called_instance_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_43 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 307;
            type_description_2 = "N";
            goto frame_exception_exit_12;
        }

        }
    }

    tmp_args_element_name_65 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_43_create_x509_certificate(  );
    frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame.f_lineno = 307;
    {
        PyObject *call_args[] = { tmp_args_element_name_65 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_43, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_65 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_create_x509_certificate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_called_instance_44 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_abc );

    if ( tmp_called_instance_44 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_44 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_44 == NULL ))
        {
            tmp_called_instance_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_44 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 313;
            type_description_2 = "N";
            goto frame_exception_exit_12;
        }

        }
    }

    tmp_args_element_name_66 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_44_create_x509_crl(  );
    frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame.f_lineno = 313;
    {
        PyObject *call_args[] = { tmp_args_element_name_66 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_44, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_66 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_create_x509_crl, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_called_instance_45 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_abc );

    if ( tmp_called_instance_45 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_45 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_45 == NULL ))
        {
            tmp_called_instance_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_45 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 320;
            type_description_2 = "N";
            goto frame_exception_exit_12;
        }

        }
    }

    tmp_args_element_name_67 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_45_create_x509_revoked_certificate(  );
    frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame.f_lineno = 320;
    {
        PyObject *call_args[] = { tmp_args_element_name_67 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_45, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_67 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_create_x509_revoked_certificate, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_called_instance_46 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_abc );

    if ( tmp_called_instance_46 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_46 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_46 == NULL ))
        {
            tmp_called_instance_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_46 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 327;
            type_description_2 = "N";
            goto frame_exception_exit_12;
        }

        }
    }

    tmp_args_element_name_68 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_46_x509_name_bytes(  );
    frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame.f_lineno = 327;
    {
        PyObject *call_args[] = { tmp_args_element_name_68 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_46, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_68 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_276, const_str_plain_x509_name_bytes, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_2 = "N";
        goto frame_exception_exit_12;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e920632726ca8dfcdf6be4a34e554de8_12 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_11;

    frame_exception_exit_12:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e920632726ca8dfcdf6be4a34e554de8_12 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e920632726ca8dfcdf6be4a34e554de8_12, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e920632726ca8dfcdf6be4a34e554de8_12->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e920632726ca8dfcdf6be4a34e554de8_12, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e920632726ca8dfcdf6be4a34e554de8_12,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_e920632726ca8dfcdf6be4a34e554de8_12 == cache_frame_e920632726ca8dfcdf6be4a34e554de8_12 )
    {
        Py_DECREF( frame_e920632726ca8dfcdf6be4a34e554de8_12 );
    }
    cache_frame_e920632726ca8dfcdf6be4a34e554de8_12 = NULL;

    assertFrameObject( frame_e920632726ca8dfcdf6be4a34e554de8_12 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_11;

    frame_no_exception_11:;

    goto skip_nested_handling_11;
    nested_frame_exit_11:;

    goto try_except_handler_34;
    skip_nested_handling_11:;
    tmp_called_name_44 = tmp_class_creation_11__metaclass;

    CHECK_OBJECT( tmp_called_name_44 );
    tmp_tuple_element_11 = const_str_plain_X509Backend;
    tmp_args_name_22 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_22, 0, tmp_tuple_element_11 );
    tmp_tuple_element_11 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_22, 1, tmp_tuple_element_11 );
    tmp_tuple_element_11 = locals_cryptography$hazmat$backends$interfaces_276;
    Py_INCREF( tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_args_name_22, 2, tmp_tuple_element_11 );
    tmp_kw_name_22 = tmp_class_creation_11__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_22 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 276;
    tmp_assign_source_64 = CALL_FUNCTION( tmp_called_name_44, tmp_args_name_22, tmp_kw_name_22 );
    Py_DECREF( tmp_args_name_22 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;

        goto try_except_handler_34;
    }
    assert( outline_10_var___class__ == NULL );
    outline_10_var___class__ = tmp_assign_source_64;

    tmp_outline_return_value_11 = outline_10_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_11 );
    Py_INCREF( tmp_outline_return_value_11 );
    goto try_return_handler_34;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_34:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_276 );
    locals_cryptography$hazmat$backends$interfaces_276 = NULL;
    goto try_return_handler_33;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_276 );
    locals_cryptography$hazmat$backends$interfaces_276 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_33;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_33:;
    CHECK_OBJECT( (PyObject *)outline_10_var___class__ );
    Py_DECREF( outline_10_var___class__ );
    outline_10_var___class__ = NULL;

    goto outline_result_11;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto outline_exception_11;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_11:;
    exception_lineno = 276;
    goto try_except_handler_32;
    outline_result_11:;
    tmp_args_element_name_59 = tmp_outline_return_value_11;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 275;
    {
        PyObject *call_args[] = { tmp_args_element_name_59 };
        tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_called_name_42 );
    Py_DECREF( tmp_args_element_name_59 );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;

        goto try_except_handler_32;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_X509Backend, tmp_assign_source_63 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_decl_dict );
    Py_DECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__class_decl_dict );
    Py_DECREF( tmp_class_creation_11__class_decl_dict );
    tmp_class_creation_11__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__metaclass );
    Py_DECREF( tmp_class_creation_11__metaclass );
    tmp_class_creation_11__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_11__prepared );
    Py_DECREF( tmp_class_creation_11__prepared );
    tmp_class_creation_11__prepared = NULL;

    tmp_assign_source_65 = PyDict_New();
    assert( tmp_class_creation_12__class_decl_dict == NULL );
    tmp_class_creation_12__class_decl_dict = tmp_assign_source_65;

    // Tried code:
    tmp_key_name_34 = const_str_plain_metaclass;
    tmp_dict_name_34 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_34 );
    tmp_res = PyDict_Contains( tmp_dict_name_34, tmp_key_name_34 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    tmp_cond_value_23 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_23 = CHECK_IF_TRUE( tmp_cond_value_23 );
    if ( tmp_cond_truth_23 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    if ( tmp_cond_truth_23 == 1 )
    {
        goto condexpr_true_23;
    }
    else
    {
        goto condexpr_false_23;
    }
    condexpr_true_23:;
    tmp_dict_name_35 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_35 );
    tmp_key_name_35 = const_str_plain_metaclass;
    tmp_metaclass_name_12 = DICT_GET_ITEM( tmp_dict_name_35, tmp_key_name_35 );
    if ( tmp_metaclass_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    goto condexpr_end_23;
    condexpr_false_23:;
    tmp_metaclass_name_12 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_12 != NULL );
    Py_INCREF( tmp_metaclass_name_12 );
    condexpr_end_23:;
    tmp_bases_name_12 = const_tuple_type_object_tuple;
    tmp_assign_source_66 = SELECT_METACLASS( tmp_metaclass_name_12, tmp_bases_name_12 );
    Py_DECREF( tmp_metaclass_name_12 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    assert( tmp_class_creation_12__metaclass == NULL );
    tmp_class_creation_12__metaclass = tmp_assign_source_66;

    tmp_key_name_36 = const_str_plain_metaclass;
    tmp_dict_name_36 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_36 );
    tmp_res = PyDict_Contains( tmp_dict_name_36, tmp_key_name_36 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    tmp_cond_value_24 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_24 = CHECK_IF_TRUE( tmp_cond_value_24 );
    if ( tmp_cond_truth_24 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    if ( tmp_cond_truth_24 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_dictdel_dict = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    branch_no_12:;
    tmp_hasattr_source_12 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_12 );
    tmp_hasattr_attr_12 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_12, tmp_hasattr_attr_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_24;
    }
    else
    {
        goto condexpr_false_24;
    }
    condexpr_true_24:;
    tmp_source_name_34 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_source_name_34 );
    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain___prepare__ );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    tmp_args_name_23 = const_tuple_str_plain_DHBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_23 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_23 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 335;
    tmp_assign_source_67 = CALL_FUNCTION( tmp_called_name_45, tmp_args_name_23, tmp_kw_name_23 );
    Py_DECREF( tmp_called_name_45 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_35;
    }
    goto condexpr_end_24;
    condexpr_false_24:;
    tmp_assign_source_67 = PyDict_New();
    condexpr_end_24:;
    assert( tmp_class_creation_12__prepared == NULL );
    tmp_class_creation_12__prepared = tmp_assign_source_67;

    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 334;

        goto try_except_handler_35;
    }

    tmp_called_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_add_metaclass );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;

        goto try_except_handler_35;
    }
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_36 == NULL )
    {
        Py_DECREF( tmp_called_name_47 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 334;

        goto try_except_handler_35;
    }

    tmp_args_element_name_69 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_47 );

        exception_lineno = 334;

        goto try_except_handler_35;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_69 };
        tmp_called_name_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_47, call_args );
    }

    Py_DECREF( tmp_called_name_47 );
    Py_DECREF( tmp_args_element_name_69 );
    if ( tmp_called_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;

        goto try_except_handler_35;
    }
    tmp_set_locals = tmp_class_creation_12__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_335 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_37;
    }
    tmp_dictset_value = const_str_plain_DHBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_37;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_ed4e85e8cdc45a45039a4ceb0199227c_13, codeobj_ed4e85e8cdc45a45039a4ceb0199227c, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_ed4e85e8cdc45a45039a4ceb0199227c_13 = cache_frame_ed4e85e8cdc45a45039a4ceb0199227c_13;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ed4e85e8cdc45a45039a4ceb0199227c_13 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ed4e85e8cdc45a45039a4ceb0199227c_13 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_47 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_abc );

    if ( tmp_called_instance_47 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_47 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_47 == NULL ))
        {
            tmp_called_instance_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_47 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 336;
            type_description_2 = "N";
            goto frame_exception_exit_13;
        }

        }
    }

    tmp_args_element_name_71 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_47_generate_dh_parameters(  );
    frame_ed4e85e8cdc45a45039a4ceb0199227c_13->m_frame.f_lineno = 336;
    {
        PyObject *call_args[] = { tmp_args_element_name_71 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_47, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_71 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_generate_dh_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_called_instance_48 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_abc );

    if ( tmp_called_instance_48 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_48 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_48 == NULL ))
        {
            tmp_called_instance_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_48 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 343;
            type_description_2 = "N";
            goto frame_exception_exit_13;
        }

        }
    }

    tmp_args_element_name_72 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_48_generate_dh_private_key(  );
    frame_ed4e85e8cdc45a45039a4ceb0199227c_13->m_frame.f_lineno = 343;
    {
        PyObject *call_args[] = { tmp_args_element_name_72 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_48, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_72 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_generate_dh_private_key, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_called_instance_49 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_abc );

    if ( tmp_called_instance_49 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_49 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_49 == NULL ))
        {
            tmp_called_instance_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_49 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 350;
            type_description_2 = "N";
            goto frame_exception_exit_13;
        }

        }
    }

    tmp_args_element_name_73 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_49_generate_dh_private_key_and_parameters(  );
    frame_ed4e85e8cdc45a45039a4ceb0199227c_13->m_frame.f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_73 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_49, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_73 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_generate_dh_private_key_and_parameters, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_called_instance_50 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_abc );

    if ( tmp_called_instance_50 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_50 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_50 == NULL ))
        {
            tmp_called_instance_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_50 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 357;
            type_description_2 = "N";
            goto frame_exception_exit_13;
        }

        }
    }

    tmp_args_element_name_74 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_50_load_dh_private_numbers(  );
    frame_ed4e85e8cdc45a45039a4ceb0199227c_13->m_frame.f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_74 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_50, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_74 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_load_dh_private_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_called_instance_51 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_abc );

    if ( tmp_called_instance_51 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_51 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_51 == NULL ))
        {
            tmp_called_instance_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_51 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 363;
            type_description_2 = "N";
            goto frame_exception_exit_13;
        }

        }
    }

    tmp_args_element_name_75 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_51_load_dh_public_numbers(  );
    frame_ed4e85e8cdc45a45039a4ceb0199227c_13->m_frame.f_lineno = 363;
    {
        PyObject *call_args[] = { tmp_args_element_name_75 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_51, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_75 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_load_dh_public_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_called_instance_52 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_abc );

    if ( tmp_called_instance_52 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_52 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_52 == NULL ))
        {
            tmp_called_instance_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_52 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 369;
            type_description_2 = "N";
            goto frame_exception_exit_13;
        }

        }
    }

    tmp_args_element_name_76 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_52_load_dh_parameter_numbers(  );
    frame_ed4e85e8cdc45a45039a4ceb0199227c_13->m_frame.f_lineno = 369;
    {
        PyObject *call_args[] = { tmp_args_element_name_76 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_52, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_76 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_load_dh_parameter_numbers, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_called_instance_53 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_abc );

    if ( tmp_called_instance_53 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_53 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_53 == NULL ))
        {
            tmp_called_instance_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_53 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 375;
            type_description_2 = "N";
            goto frame_exception_exit_13;
        }

        }
    }

    tmp_defaults_1 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_args_element_name_77 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_53_dh_parameters_supported( tmp_defaults_1 );
    frame_ed4e85e8cdc45a45039a4ceb0199227c_13->m_frame.f_lineno = 375;
    {
        PyObject *call_args[] = { tmp_args_element_name_77 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_53, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_77 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_dh_parameters_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_called_instance_54 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_abc );

    if ( tmp_called_instance_54 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_54 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_54 == NULL ))
        {
            tmp_called_instance_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_54 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 381;
            type_description_2 = "N";
            goto frame_exception_exit_13;
        }

        }
    }

    tmp_args_element_name_78 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_54_dh_x942_serialization_supported(  );
    frame_ed4e85e8cdc45a45039a4ceb0199227c_13->m_frame.f_lineno = 381;
    {
        PyObject *call_args[] = { tmp_args_element_name_78 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_54, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_78 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_335, const_str_plain_dh_x942_serialization_supported, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 381;
        type_description_2 = "N";
        goto frame_exception_exit_13;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed4e85e8cdc45a45039a4ceb0199227c_13 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_12;

    frame_exception_exit_13:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ed4e85e8cdc45a45039a4ceb0199227c_13 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ed4e85e8cdc45a45039a4ceb0199227c_13, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ed4e85e8cdc45a45039a4ceb0199227c_13->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ed4e85e8cdc45a45039a4ceb0199227c_13, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ed4e85e8cdc45a45039a4ceb0199227c_13,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_ed4e85e8cdc45a45039a4ceb0199227c_13 == cache_frame_ed4e85e8cdc45a45039a4ceb0199227c_13 )
    {
        Py_DECREF( frame_ed4e85e8cdc45a45039a4ceb0199227c_13 );
    }
    cache_frame_ed4e85e8cdc45a45039a4ceb0199227c_13 = NULL;

    assertFrameObject( frame_ed4e85e8cdc45a45039a4ceb0199227c_13 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_12;

    frame_no_exception_12:;

    goto skip_nested_handling_12;
    nested_frame_exit_12:;

    goto try_except_handler_37;
    skip_nested_handling_12:;
    tmp_called_name_48 = tmp_class_creation_12__metaclass;

    CHECK_OBJECT( tmp_called_name_48 );
    tmp_tuple_element_12 = const_str_plain_DHBackend;
    tmp_args_name_24 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_24, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_24, 1, tmp_tuple_element_12 );
    tmp_tuple_element_12 = locals_cryptography$hazmat$backends$interfaces_335;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_24, 2, tmp_tuple_element_12 );
    tmp_kw_name_24 = tmp_class_creation_12__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_24 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 335;
    tmp_assign_source_69 = CALL_FUNCTION( tmp_called_name_48, tmp_args_name_24, tmp_kw_name_24 );
    Py_DECREF( tmp_args_name_24 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;

        goto try_except_handler_37;
    }
    assert( outline_11_var___class__ == NULL );
    outline_11_var___class__ = tmp_assign_source_69;

    tmp_outline_return_value_12 = outline_11_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_12 );
    Py_INCREF( tmp_outline_return_value_12 );
    goto try_return_handler_37;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_37:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_335 );
    locals_cryptography$hazmat$backends$interfaces_335 = NULL;
    goto try_return_handler_36;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_335 );
    locals_cryptography$hazmat$backends$interfaces_335 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_36;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_36:;
    CHECK_OBJECT( (PyObject *)outline_11_var___class__ );
    Py_DECREF( outline_11_var___class__ );
    outline_11_var___class__ = NULL;

    goto outline_result_12;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto outline_exception_12;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_12:;
    exception_lineno = 335;
    goto try_except_handler_35;
    outline_result_12:;
    tmp_args_element_name_70 = tmp_outline_return_value_12;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 334;
    {
        PyObject *call_args[] = { tmp_args_element_name_70 };
        tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_46, call_args );
    }

    Py_DECREF( tmp_called_name_46 );
    Py_DECREF( tmp_args_element_name_70 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;

        goto try_except_handler_35;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_DHBackend, tmp_assign_source_68 );
    goto try_end_13;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_decl_dict );
    Py_DECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__class_decl_dict );
    Py_DECREF( tmp_class_creation_12__class_decl_dict );
    tmp_class_creation_12__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__metaclass );
    Py_DECREF( tmp_class_creation_12__metaclass );
    tmp_class_creation_12__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_12__prepared );
    Py_DECREF( tmp_class_creation_12__prepared );
    tmp_class_creation_12__prepared = NULL;

    tmp_assign_source_70 = PyDict_New();
    assert( tmp_class_creation_13__class_decl_dict == NULL );
    tmp_class_creation_13__class_decl_dict = tmp_assign_source_70;

    // Tried code:
    tmp_key_name_37 = const_str_plain_metaclass;
    tmp_dict_name_37 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_37 );
    tmp_res = PyDict_Contains( tmp_dict_name_37, tmp_key_name_37 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    tmp_cond_value_25 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_25 = CHECK_IF_TRUE( tmp_cond_value_25 );
    if ( tmp_cond_truth_25 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    if ( tmp_cond_truth_25 == 1 )
    {
        goto condexpr_true_25;
    }
    else
    {
        goto condexpr_false_25;
    }
    condexpr_true_25:;
    tmp_dict_name_38 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_38 );
    tmp_key_name_38 = const_str_plain_metaclass;
    tmp_metaclass_name_13 = DICT_GET_ITEM( tmp_dict_name_38, tmp_key_name_38 );
    if ( tmp_metaclass_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    goto condexpr_end_25;
    condexpr_false_25:;
    tmp_metaclass_name_13 = LOOKUP_BUILTIN( const_str_plain_type );
    assert( tmp_metaclass_name_13 != NULL );
    Py_INCREF( tmp_metaclass_name_13 );
    condexpr_end_25:;
    tmp_bases_name_13 = const_tuple_type_object_tuple;
    tmp_assign_source_71 = SELECT_METACLASS( tmp_metaclass_name_13, tmp_bases_name_13 );
    Py_DECREF( tmp_metaclass_name_13 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    assert( tmp_class_creation_13__metaclass == NULL );
    tmp_class_creation_13__metaclass = tmp_assign_source_71;

    tmp_key_name_39 = const_str_plain_metaclass;
    tmp_dict_name_39 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_39 );
    tmp_res = PyDict_Contains( tmp_dict_name_39, tmp_key_name_39 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    tmp_cond_value_26 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_26 = CHECK_IF_TRUE( tmp_cond_value_26 );
    if ( tmp_cond_truth_26 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    if ( tmp_cond_truth_26 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_dictdel_dict = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    branch_no_13:;
    tmp_hasattr_source_13 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_13 );
    tmp_hasattr_attr_13 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_13, tmp_hasattr_attr_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_26;
    }
    else
    {
        goto condexpr_false_26;
    }
    condexpr_true_26:;
    tmp_source_name_37 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_source_name_37 );
    tmp_called_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain___prepare__ );
    if ( tmp_called_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    tmp_args_name_25 = const_tuple_str_plain_ScryptBackend_tuple_type_object_tuple_tuple;
    tmp_kw_name_25 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_25 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 390;
    tmp_assign_source_72 = CALL_FUNCTION( tmp_called_name_49, tmp_args_name_25, tmp_kw_name_25 );
    Py_DECREF( tmp_called_name_49 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_38;
    }
    goto condexpr_end_26;
    condexpr_false_26:;
    tmp_assign_source_72 = PyDict_New();
    condexpr_end_26:;
    assert( tmp_class_creation_13__prepared == NULL );
    tmp_class_creation_13__prepared = tmp_assign_source_72;

    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_six );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
    }

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "six" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 389;

        goto try_except_handler_38;
    }

    tmp_called_name_51 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_add_metaclass );
    if ( tmp_called_name_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;

        goto try_except_handler_38;
    }
    tmp_source_name_39 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

    if (unlikely( tmp_source_name_39 == NULL ))
    {
        tmp_source_name_39 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
    }

    if ( tmp_source_name_39 == NULL )
    {
        Py_DECREF( tmp_called_name_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 389;

        goto try_except_handler_38;
    }

    tmp_args_element_name_79 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_ABCMeta );
    if ( tmp_args_element_name_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_51 );

        exception_lineno = 389;

        goto try_except_handler_38;
    }
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 389;
    {
        PyObject *call_args[] = { tmp_args_element_name_79 };
        tmp_called_name_50 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_51, call_args );
    }

    Py_DECREF( tmp_called_name_51 );
    Py_DECREF( tmp_args_element_name_79 );
    if ( tmp_called_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;

        goto try_except_handler_38;
    }
    tmp_set_locals = tmp_class_creation_13__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_cryptography$hazmat$backends$interfaces_390 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_624798dd704a8f07276d3e75153a7c4b;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_390, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_40;
    }
    tmp_dictset_value = const_str_plain_ScryptBackend;
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_390, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_40;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_d2033cebfae5bd7720a2318489c6bef4_14, codeobj_d2033cebfae5bd7720a2318489c6bef4, module_cryptography$hazmat$backends$interfaces, sizeof(void *) );
    frame_d2033cebfae5bd7720a2318489c6bef4_14 = cache_frame_d2033cebfae5bd7720a2318489c6bef4_14;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d2033cebfae5bd7720a2318489c6bef4_14 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d2033cebfae5bd7720a2318489c6bef4_14 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_55 = PyObject_GetItem( locals_cryptography$hazmat$backends$interfaces_390, const_str_plain_abc );

    if ( tmp_called_instance_55 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_called_instance_55 = GET_STRING_DICT_VALUE( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_abc );

        if (unlikely( tmp_called_instance_55 == NULL ))
        {
            tmp_called_instance_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abc );
        }

        if ( tmp_called_instance_55 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "abc" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 391;
            type_description_2 = "N";
            goto frame_exception_exit_14;
        }

        }
    }

    tmp_args_element_name_81 = MAKE_FUNCTION_cryptography$hazmat$backends$interfaces$$$function_55_derive_scrypt(  );
    frame_d2033cebfae5bd7720a2318489c6bef4_14->m_frame.f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_args_element_name_81 };
        tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_55, const_str_plain_abstractmethod, call_args );
    }

    Py_DECREF( tmp_args_element_name_81 );
    if ( tmp_dictset_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_2 = "N";
        goto frame_exception_exit_14;
    }
    tmp_res = PyObject_SetItem( locals_cryptography$hazmat$backends$interfaces_390, const_str_plain_derive_scrypt, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        type_description_2 = "N";
        goto frame_exception_exit_14;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d2033cebfae5bd7720a2318489c6bef4_14 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_13;

    frame_exception_exit_14:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d2033cebfae5bd7720a2318489c6bef4_14 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d2033cebfae5bd7720a2318489c6bef4_14, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d2033cebfae5bd7720a2318489c6bef4_14->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d2033cebfae5bd7720a2318489c6bef4_14, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d2033cebfae5bd7720a2318489c6bef4_14,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_d2033cebfae5bd7720a2318489c6bef4_14 == cache_frame_d2033cebfae5bd7720a2318489c6bef4_14 )
    {
        Py_DECREF( frame_d2033cebfae5bd7720a2318489c6bef4_14 );
    }
    cache_frame_d2033cebfae5bd7720a2318489c6bef4_14 = NULL;

    assertFrameObject( frame_d2033cebfae5bd7720a2318489c6bef4_14 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_13;

    frame_no_exception_13:;

    goto skip_nested_handling_13;
    nested_frame_exit_13:;

    goto try_except_handler_40;
    skip_nested_handling_13:;
    tmp_called_name_52 = tmp_class_creation_13__metaclass;

    CHECK_OBJECT( tmp_called_name_52 );
    tmp_tuple_element_13 = const_str_plain_ScryptBackend;
    tmp_args_name_26 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_26, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = const_tuple_type_object_tuple;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_26, 1, tmp_tuple_element_13 );
    tmp_tuple_element_13 = locals_cryptography$hazmat$backends$interfaces_390;
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_args_name_26, 2, tmp_tuple_element_13 );
    tmp_kw_name_26 = tmp_class_creation_13__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_26 );
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 390;
    tmp_assign_source_74 = CALL_FUNCTION( tmp_called_name_52, tmp_args_name_26, tmp_kw_name_26 );
    Py_DECREF( tmp_args_name_26 );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;

        goto try_except_handler_40;
    }
    assert( outline_12_var___class__ == NULL );
    outline_12_var___class__ = tmp_assign_source_74;

    tmp_outline_return_value_13 = outline_12_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_13 );
    Py_INCREF( tmp_outline_return_value_13 );
    goto try_return_handler_40;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_40:;
    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_390 );
    locals_cryptography$hazmat$backends$interfaces_390 = NULL;
    goto try_return_handler_39;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_cryptography$hazmat$backends$interfaces_390 );
    locals_cryptography$hazmat$backends$interfaces_390 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto try_except_handler_39;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_39:;
    CHECK_OBJECT( (PyObject *)outline_12_var___class__ );
    Py_DECREF( outline_12_var___class__ );
    outline_12_var___class__ = NULL;

    goto outline_result_13;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto outline_exception_13;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( cryptography$hazmat$backends$interfaces );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_13:;
    exception_lineno = 390;
    goto try_except_handler_38;
    outline_result_13:;
    tmp_args_element_name_80 = tmp_outline_return_value_13;
    frame_a2f8a590e966b3a16638c31205342ee3->m_frame.f_lineno = 389;
    {
        PyObject *call_args[] = { tmp_args_element_name_80 };
        tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, call_args );
    }

    Py_DECREF( tmp_called_name_50 );
    Py_DECREF( tmp_args_element_name_80 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;

        goto try_except_handler_38;
    }
    UPDATE_STRING_DICT1( moduledict_cryptography$hazmat$backends$interfaces, (Nuitka_StringObject *)const_str_plain_ScryptBackend, tmp_assign_source_73 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_decl_dict );
    Py_DECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2f8a590e966b3a16638c31205342ee3 );
#endif
    popFrameStack();

    assertFrameObject( frame_a2f8a590e966b3a16638c31205342ee3 );

    goto frame_no_exception_14;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a2f8a590e966b3a16638c31205342ee3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a2f8a590e966b3a16638c31205342ee3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a2f8a590e966b3a16638c31205342ee3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a2f8a590e966b3a16638c31205342ee3, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_14:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__class_decl_dict );
    Py_DECREF( tmp_class_creation_13__class_decl_dict );
    tmp_class_creation_13__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__metaclass );
    Py_DECREF( tmp_class_creation_13__metaclass );
    tmp_class_creation_13__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_13__prepared );
    Py_DECREF( tmp_class_creation_13__prepared );
    tmp_class_creation_13__prepared = NULL;


    return MOD_RETURN_VALUE( module_cryptography$hazmat$backends$interfaces );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
