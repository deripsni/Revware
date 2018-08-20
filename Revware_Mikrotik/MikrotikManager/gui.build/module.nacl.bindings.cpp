/* Generated code for Python source for module 'nacl.bindings'
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

/* The _module_nacl$bindings is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nacl$bindings;
PyDictObject *moduledict_nacl$bindings;

/* The module constants used, if any. */
static PyObject *const_str_plain_crypto_shorthash_siphashx24_KEYBYTES;
extern PyObject *const_str_plain_crypto_box_beforenm;
extern PyObject *const_str_plain_crypto_generichash_SALTBYTES;
extern PyObject *const_str_digest_d93333622e69b800e2e1fe47de24e669;
extern PyObject *const_str_plain_randombytes;
extern PyObject *const_str_plain_crypto_sign_SECRETKEYBYTES;
extern PyObject *const_str_digest_1c1286498025a40111477ba6f22179d4;
extern PyObject *const_str_plain_crypto_box_BEFORENMBYTES;
static PyObject *const_tuple_076a554aafe9d5c84f720ccdaf6ae40d_tuple;
extern PyObject *const_str_plain_crypto_box_PUBLICKEYBYTES;
extern PyObject *const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_SENSITIVE;
extern PyObject *const_str_plain_crypto_pwhash_alg;
extern PyObject *const_str_plain_crypto_pwhash_argon2id_STRPREFIX;
extern PyObject *const_str_digest_4c3a8ad073ec574e6d9f7a94b0a2c3b2;
extern PyObject *const_str_digest_9e9ed4aa0c3568e08792285232c33d4b;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_crypto_pwhash_scryptsalsa208sha256_ll;
extern PyObject *const_str_digest_955c4ac94da4dcc37d90fba3d863f772;
extern PyObject *const_str_digest_99b3cee5d85987c740ebf93db607f809;
extern PyObject *const_str_digest_fa166413682902fd321f04ea5d7466ad;
extern PyObject *const_str_plain_crypto_scalarmult;
extern PyObject *const_str_plain_crypto_generichash_blake2b_final;
extern PyObject *const_str_plain_crypto_generichash_blake2b_salt_personal;
extern PyObject *const_tuple_824314a472ad3b8b25d9b50aea996065_tuple;
extern PyObject *const_str_digest_cce787bed8426b8a1550947a1d5637fc;
static PyObject *const_str_plain_crypto_shorthash_siphashx24_BYTES;
extern PyObject *const_str_plain_division;
static PyObject *const_tuple_701a6d2453d730e138282116e64c58b0_tuple;
extern PyObject *const_str_digest_cb591129d1b5accd433f40ca859f83a6;
extern PyObject *const_str_plain_generichash_blake2b_final;
extern PyObject *const_str_plain_sodium_init;
extern PyObject *const_str_plain_generichash_blake2b_update;
extern PyObject *const_str_plain_crypto_pwhash_argon2id_MEMLIMIT_MAX;
extern PyObject *const_str_digest_edc2e851bee295a26838acae4c3684a8;
extern PyObject *const_str_plain_crypto_box;
extern PyObject *const_str_plain_crypto_pwhash_argon2id_OPSLIMIT_MODERATE;
extern PyObject *const_str_plain_crypto_secretbox_open;
extern PyObject *const_str_plain_bindings;
extern PyObject *const_str_plain_crypto_generichash_blake2b_update;
extern PyObject *const_str_plain_crypto_sign_seed_keypair;
extern PyObject *const_str_plain_crypto_hash_sha256;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_generichash_blake2b_state_copy;
extern PyObject *const_str_plain_crypto_generichash_BYTES;
extern PyObject *const_str_plain_crypto_sign;
extern PyObject *const_str_plain_crypto_secretbox_ZEROBYTES;
extern PyObject *const_str_digest_0c98e8974f4716941e2c77cd6b7f1b55;
extern PyObject *const_str_plain_crypto_pwhash_argon2id_MEMLIMIT_MIN;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_digest_6e8ace5ae1348982a84f5d14e0a68a9d;
static PyObject *const_tuple_2d043b331bccbd22c9124dcdd011f383_tuple;
extern PyObject *const_str_plain_crypto_sign_PUBLICKEYBYTES;
extern PyObject *const_str_plain_crypto_box_keypair;
extern PyObject *const_str_plain_crypto_scalarmult_SCALARBYTES;
extern PyObject *const_str_digest_78c141ea35f5d6417ddefa9cf9d32a3a;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_crypto_box_seal_open;
extern PyObject *const_str_digest_4030f6953a665f3682d1f69d98056029;
extern PyObject *const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_MAX;
extern PyObject *const_str_plain_crypto_box_seal;
extern PyObject *const_str_digest_0a6da34c88a1116e23b0f8700cfb162f;
extern PyObject *const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_MIN;
extern PyObject *const_str_plain_crypto_pwhash_ALG_ARGON2I13;
extern PyObject *const_str_plain_crypto_sign_ed25519_sk_to_curve25519;
extern PyObject *const_str_digest_303fc3c51c5cfd72512fcd3cc0ad7e9b;
extern PyObject *const_str_digest_f13d4b3c6fe30552c11ba1a5e01fc1de;
extern PyObject *const_str_digest_aace0907f72e900aefebc81264394a2d;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_crypto_box_SEALBYTES;
extern PyObject *const_str_digest_c8c2411203ddb893d375add88b7df56c;
extern PyObject *const_str_plain_crypto_box_afternm;
extern PyObject *const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_MAX;
extern PyObject *const_str_plain_crypto_pwhash_argon2id_MEMLIMIT_MODERATE;
static PyObject *const_str_digest_7d5ec38c0732ecbc2579b9416e1095ce;
extern PyObject *const_str_digest_521070d0b21fe0ccd0518262b87694dc;
extern PyObject *const_str_plain_crypto_generichash_STATEBYTES;
static PyObject *const_str_plain_crypto_generichash_blake2b_init;
static PyObject *const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple;
extern PyObject *const_str_plain_crypto_box_SECRETKEYBYTES;
extern PyObject *const_str_plain_XKEYBYTES;
extern PyObject *const_str_plain_crypto_sign_keypair;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_crypto_generichash_KEYBYTES_MIN;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_crypto_box_ZEROBYTES;
extern PyObject *const_str_plain_BYTES;
extern PyObject *const_str_plain_crypto_secretbox_BOXZEROBYTES;
static PyObject *const_tuple_str_plain_sodium_memcmp_tuple;
extern PyObject *const_str_plain_crypto_pwhash_BYTES_MIN;
extern PyObject *const_str_plain_crypto_generichash_PERSONALBYTES;
extern PyObject *const_str_plain_crypto_pwhash_STRBYTES;
extern PyObject *const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_MIN;
extern PyObject *const_str_plain_crypto_pwhash_str_verify;
extern PyObject *const_str_digest_46c1aaecc8ae90de20eab57571a02cf9;
extern PyObject *const_str_plain_XBYTES;
extern PyObject *const_str_plain_KEYBYTES;
extern PyObject *const_str_plain_crypto_sign_ed25519_pk_to_curve25519;
extern PyObject *const_str_plain_crypto_box_seed_keypair;
static PyObject *const_str_plain_crypto_shorthash_siphash24_BYTES;
static PyObject *const_tuple_5678ed613d7da51393c811b5c4e6905a_tuple;
extern PyObject *const_str_plain_crypto_pwhash_ALG_ARGON2ID13;
extern PyObject *const_str_digest_2f5cacc4a5dd448f3b22ae6c47173e7c;
extern PyObject *const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_MODERATE;
extern PyObject *const_str_plain_crypto_pwhash_argon2id_OPSLIMIT_MIN;
extern PyObject *const_str_plain_crypto_sign_BYTES;
extern PyObject *const_str_plain_crypto_box_open_afternm;
extern PyObject *const_str_digest_811c19800071bdb2629d74e01acf8bf7;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_crypto_secretbox_KEYBYTES;
extern PyObject *const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_MODERATE;
extern PyObject *const_str_digest_52988674049cd030e8a1e18212efe1d8;
static PyObject *const_str_plain_crypto_generichash_blake2b_state_copy;
static PyObject *const_str_plain_crypto_shorthash_siphash24_KEYBYTES;
extern PyObject *const_str_plain_crypto_generichash_BYTES_MAX;
extern PyObject *const_str_plain_crypto_hash;
extern PyObject *const_str_plain_crypto_pwhash_PASSWD_MIN;
extern PyObject *const_str_plain_crypto_box_open;
extern PyObject *const_str_plain_crypto_hash_BYTES;
extern PyObject *const_str_plain_sodium_memcmp;
extern PyObject *const_str_plain_crypto_box_NONCEBYTES;
extern PyObject *const_str_plain_crypto_generichash_KEYBYTES_MAX;
extern PyObject *const_str_digest_0d3264d20811b34b03bfd7dafed1d686;
extern PyObject *const_str_plain_crypto_secretbox;
static PyObject *const_tuple_str_plain_randombytes_tuple;
extern PyObject *const_str_plain_dirname;
extern PyObject *const_str_digest_96b79ba6f4b1fbd83cdb52c631bdb910;
static PyObject *const_tuple_8aa3812e16bb67c80d283aa113add14f_tuple;
extern PyObject *const_str_plain_crypto_pwhash_PASSWD_MAX;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_NUITKA_PACKAGE_nacl;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_crypto_scalarmult_BYTES;
extern PyObject *const_str_plain_crypto_shorthash_siphash24;
static PyObject *const_tuple_8ded8811b26ce4c43e4a017c2b226ff3_tuple;
static PyObject *const_str_digest_56bad0912fd812c5f3071de38f278cdb;
extern PyObject *const_str_plain_crypto_hash_sha256_BYTES;
extern PyObject *const_str_plain_crypto_sign_SEEDBYTES;
extern PyObject *const_str_digest_1f06c2245a21ae44c3ba8fa825fbe3f1;
extern PyObject *const_str_plain_crypto_scalarmult_base;
extern PyObject *const_str_plain_crypto_pwhash_SALTBYTES;
extern PyObject *const_str_plain_crypto_generichash_BYTES_MIN;
extern PyObject *const_str_plain_crypto_pwhash_argon2i_STRPREFIX;
extern PyObject *const_str_plain_crypto_box_BOXZEROBYTES;
extern PyObject *const_str_plain_nacl_bindings_pick_scrypt_params;
extern PyObject *const_str_plain_crypto_pwhash_scryptsalsa208sha256_str;
static PyObject *const_tuple_str_plain_sodium_init_tuple;
static PyObject *const_str_plain_NUITKA_PACKAGE_nacl_bindings;
extern PyObject *const_str_plain_crypto_hash_sha512;
extern PyObject *const_str_plain_crypto_pwhash_argon2id_OPSLIMIT_MAX;
extern PyObject *const_str_digest_69b9b1db0f5d97386f8e82ff423661d4;
extern PyObject *const_str_digest_5bfaf90dbd407b4fc29090c8f6415242;
extern PyObject *const_str_plain_crypto_box_SEEDBYTES;
extern PyObject *const_str_plain_crypto_pwhash_ALG_DEFAULT;
extern PyObject *const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_SENSITIVE;
extern PyObject *const_str_digest_4d9630d02406d41c494d64e09d0080e5;
extern PyObject *const_str_digest_f271c343ef77af259e7887cb5e597565;
extern PyObject *const_str_plain_get;
static PyObject *const_tuple_b0ec598a0573f7f7c6cd2538492678e4_tuple;
extern PyObject *const_str_digest_4a00940a335e5d2567da0bd75d62adfa;
extern PyObject *const_str_plain_crypto_pwhash_BYTES_MAX;
extern PyObject *const_str_digest_e86187ccc4d6f568b5323f8a2043c263;
extern PyObject *const_str_plain_crypto_secretbox_NONCEBYTES;
extern PyObject *const_str_plain_crypto_sign_open;
extern PyObject *const_str_plain_crypto_shorthash_siphashx24;
extern PyObject *const_str_plain_crypto_generichash_KEYBYTES;
static PyObject *const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple;
extern PyObject *const_str_plain_crypto_pwhash_str_alg;
extern PyObject *const_str_digest_2a4fa1aa9fdca6eac9f1f9434eb3878d;
static PyObject *const_list_9b31ac6b7e6750ebaf27aca4f38ad7de_list;
extern PyObject *const_str_plain_generichash_blake2b_init;
extern PyObject *const_str_plain_crypto_hash_sha512_BYTES;
extern PyObject *const_str_digest_7ecb6a1a21a321e5e6b6085924ef3c76;
extern PyObject *const_str_plain_generichash_blake2b_salt_personal;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_crypto_shorthash_siphashx24_KEYBYTES = UNSTREAM_STRING( &constant_bin[ 342816 ], 36, 1 );
    const_tuple_076a554aafe9d5c84f720ccdaf6ae40d_tuple = PyTuple_New( 2 );
    const_str_plain_NUITKA_PACKAGE_nacl_bindings = UNSTREAM_STRING( &constant_bin[ 342852 ], 28, 1 );
    PyTuple_SET_ITEM( const_tuple_076a554aafe9d5c84f720ccdaf6ae40d_tuple, 0, const_str_plain_NUITKA_PACKAGE_nacl_bindings ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_nacl_bindings );
    PyTuple_SET_ITEM( const_tuple_076a554aafe9d5c84f720ccdaf6ae40d_tuple, 1, const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 ); Py_INCREF( const_str_digest_5bfaf90dbd407b4fc29090c8f6415242 );
    const_str_plain_crypto_shorthash_siphashx24_BYTES = UNSTREAM_STRING( &constant_bin[ 342880 ], 33, 1 );
    const_tuple_701a6d2453d730e138282116e64c58b0_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 0, const_str_plain_crypto_generichash_BYTES ); Py_INCREF( const_str_plain_crypto_generichash_BYTES );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 1, const_str_plain_crypto_generichash_BYTES_MAX ); Py_INCREF( const_str_plain_crypto_generichash_BYTES_MAX );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 2, const_str_plain_crypto_generichash_BYTES_MIN ); Py_INCREF( const_str_plain_crypto_generichash_BYTES_MIN );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 3, const_str_plain_crypto_generichash_KEYBYTES ); Py_INCREF( const_str_plain_crypto_generichash_KEYBYTES );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 4, const_str_plain_crypto_generichash_KEYBYTES_MAX ); Py_INCREF( const_str_plain_crypto_generichash_KEYBYTES_MAX );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 5, const_str_plain_crypto_generichash_KEYBYTES_MIN ); Py_INCREF( const_str_plain_crypto_generichash_KEYBYTES_MIN );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 6, const_str_plain_crypto_generichash_PERSONALBYTES ); Py_INCREF( const_str_plain_crypto_generichash_PERSONALBYTES );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 7, const_str_plain_crypto_generichash_SALTBYTES ); Py_INCREF( const_str_plain_crypto_generichash_SALTBYTES );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 8, const_str_plain_crypto_generichash_STATEBYTES ); Py_INCREF( const_str_plain_crypto_generichash_STATEBYTES );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 9, const_str_plain_generichash_blake2b_final ); Py_INCREF( const_str_plain_generichash_blake2b_final );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 10, const_str_plain_generichash_blake2b_init ); Py_INCREF( const_str_plain_generichash_blake2b_init );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 11, const_str_plain_generichash_blake2b_salt_personal ); Py_INCREF( const_str_plain_generichash_blake2b_salt_personal );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 12, const_str_plain_generichash_blake2b_state_copy ); Py_INCREF( const_str_plain_generichash_blake2b_state_copy );
    PyTuple_SET_ITEM( const_tuple_701a6d2453d730e138282116e64c58b0_tuple, 13, const_str_plain_generichash_blake2b_update ); Py_INCREF( const_str_plain_generichash_blake2b_update );
    const_tuple_2d043b331bccbd22c9124dcdd011f383_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2d043b331bccbd22c9124dcdd011f383_tuple, 0, const_str_plain_crypto_scalarmult ); Py_INCREF( const_str_plain_crypto_scalarmult );
    PyTuple_SET_ITEM( const_tuple_2d043b331bccbd22c9124dcdd011f383_tuple, 1, const_str_plain_crypto_scalarmult_BYTES ); Py_INCREF( const_str_plain_crypto_scalarmult_BYTES );
    PyTuple_SET_ITEM( const_tuple_2d043b331bccbd22c9124dcdd011f383_tuple, 2, const_str_plain_crypto_scalarmult_SCALARBYTES ); Py_INCREF( const_str_plain_crypto_scalarmult_SCALARBYTES );
    PyTuple_SET_ITEM( const_tuple_2d043b331bccbd22c9124dcdd011f383_tuple, 3, const_str_plain_crypto_scalarmult_base ); Py_INCREF( const_str_plain_crypto_scalarmult_base );
    const_str_digest_7d5ec38c0732ecbc2579b9416e1095ce = UNSTREAM_STRING( &constant_bin[ 342913 ], 25, 0 );
    const_str_plain_crypto_generichash_blake2b_init = UNSTREAM_STRING( &constant_bin[ 342938 ], 31, 1 );
    const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 0, const_str_plain_crypto_sign ); Py_INCREF( const_str_plain_crypto_sign );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 1, const_str_plain_crypto_sign_BYTES ); Py_INCREF( const_str_plain_crypto_sign_BYTES );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 2, const_str_plain_crypto_sign_PUBLICKEYBYTES ); Py_INCREF( const_str_plain_crypto_sign_PUBLICKEYBYTES );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 3, const_str_plain_crypto_sign_SECRETKEYBYTES ); Py_INCREF( const_str_plain_crypto_sign_SECRETKEYBYTES );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 4, const_str_plain_crypto_sign_SEEDBYTES ); Py_INCREF( const_str_plain_crypto_sign_SEEDBYTES );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 5, const_str_plain_crypto_sign_ed25519_pk_to_curve25519 ); Py_INCREF( const_str_plain_crypto_sign_ed25519_pk_to_curve25519 );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 6, const_str_plain_crypto_sign_ed25519_sk_to_curve25519 ); Py_INCREF( const_str_plain_crypto_sign_ed25519_sk_to_curve25519 );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 7, const_str_plain_crypto_sign_keypair ); Py_INCREF( const_str_plain_crypto_sign_keypair );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 8, const_str_plain_crypto_sign_open ); Py_INCREF( const_str_plain_crypto_sign_open );
    PyTuple_SET_ITEM( const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple, 9, const_str_plain_crypto_sign_seed_keypair ); Py_INCREF( const_str_plain_crypto_sign_seed_keypair );
    const_tuple_str_plain_sodium_memcmp_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sodium_memcmp_tuple, 0, const_str_plain_sodium_memcmp ); Py_INCREF( const_str_plain_sodium_memcmp );
    const_str_plain_crypto_shorthash_siphash24_BYTES = UNSTREAM_STRING( &constant_bin[ 342969 ], 32, 1 );
    const_tuple_5678ed613d7da51393c811b5c4e6905a_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_5678ed613d7da51393c811b5c4e6905a_tuple, 0, const_str_plain_BYTES ); Py_INCREF( const_str_plain_BYTES );
    PyTuple_SET_ITEM( const_tuple_5678ed613d7da51393c811b5c4e6905a_tuple, 1, const_str_plain_KEYBYTES ); Py_INCREF( const_str_plain_KEYBYTES );
    PyTuple_SET_ITEM( const_tuple_5678ed613d7da51393c811b5c4e6905a_tuple, 2, const_str_plain_XBYTES ); Py_INCREF( const_str_plain_XBYTES );
    PyTuple_SET_ITEM( const_tuple_5678ed613d7da51393c811b5c4e6905a_tuple, 3, const_str_plain_XKEYBYTES ); Py_INCREF( const_str_plain_XKEYBYTES );
    PyTuple_SET_ITEM( const_tuple_5678ed613d7da51393c811b5c4e6905a_tuple, 4, const_str_plain_crypto_shorthash_siphash24 ); Py_INCREF( const_str_plain_crypto_shorthash_siphash24 );
    PyTuple_SET_ITEM( const_tuple_5678ed613d7da51393c811b5c4e6905a_tuple, 5, const_str_plain_crypto_shorthash_siphashx24 ); Py_INCREF( const_str_plain_crypto_shorthash_siphashx24 );
    const_str_plain_crypto_generichash_blake2b_state_copy = UNSTREAM_STRING( &constant_bin[ 343001 ], 37, 1 );
    const_str_plain_crypto_shorthash_siphash24_KEYBYTES = UNSTREAM_STRING( &constant_bin[ 343038 ], 35, 1 );
    const_tuple_str_plain_randombytes_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_randombytes_tuple, 0, const_str_plain_randombytes ); Py_INCREF( const_str_plain_randombytes );
    const_tuple_8aa3812e16bb67c80d283aa113add14f_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 343073 ], 2083 );
    const_tuple_8ded8811b26ce4c43e4a017c2b226ff3_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_8ded8811b26ce4c43e4a017c2b226ff3_tuple, 0, const_str_plain_crypto_hash ); Py_INCREF( const_str_plain_crypto_hash );
    PyTuple_SET_ITEM( const_tuple_8ded8811b26ce4c43e4a017c2b226ff3_tuple, 1, const_str_plain_crypto_hash_BYTES ); Py_INCREF( const_str_plain_crypto_hash_BYTES );
    PyTuple_SET_ITEM( const_tuple_8ded8811b26ce4c43e4a017c2b226ff3_tuple, 2, const_str_plain_crypto_hash_sha256 ); Py_INCREF( const_str_plain_crypto_hash_sha256 );
    PyTuple_SET_ITEM( const_tuple_8ded8811b26ce4c43e4a017c2b226ff3_tuple, 3, const_str_plain_crypto_hash_sha256_BYTES ); Py_INCREF( const_str_plain_crypto_hash_sha256_BYTES );
    PyTuple_SET_ITEM( const_tuple_8ded8811b26ce4c43e4a017c2b226ff3_tuple, 4, const_str_plain_crypto_hash_sha512 ); Py_INCREF( const_str_plain_crypto_hash_sha512 );
    PyTuple_SET_ITEM( const_tuple_8ded8811b26ce4c43e4a017c2b226ff3_tuple, 5, const_str_plain_crypto_hash_sha512_BYTES ); Py_INCREF( const_str_plain_crypto_hash_sha512_BYTES );
    const_str_digest_56bad0912fd812c5f3071de38f278cdb = UNSTREAM_STRING( &constant_bin[ 345156 ], 22, 0 );
    const_tuple_str_plain_sodium_init_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_sodium_init_tuple, 0, const_str_plain_sodium_init ); Py_INCREF( const_str_plain_sodium_init );
    const_tuple_b0ec598a0573f7f7c6cd2538492678e4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b0ec598a0573f7f7c6cd2538492678e4_tuple, 0, const_str_plain_crypto_secretbox ); Py_INCREF( const_str_plain_crypto_secretbox );
    PyTuple_SET_ITEM( const_tuple_b0ec598a0573f7f7c6cd2538492678e4_tuple, 1, const_str_plain_crypto_secretbox_BOXZEROBYTES ); Py_INCREF( const_str_plain_crypto_secretbox_BOXZEROBYTES );
    PyTuple_SET_ITEM( const_tuple_b0ec598a0573f7f7c6cd2538492678e4_tuple, 2, const_str_plain_crypto_secretbox_KEYBYTES ); Py_INCREF( const_str_plain_crypto_secretbox_KEYBYTES );
    PyTuple_SET_ITEM( const_tuple_b0ec598a0573f7f7c6cd2538492678e4_tuple, 3, const_str_plain_crypto_secretbox_NONCEBYTES ); Py_INCREF( const_str_plain_crypto_secretbox_NONCEBYTES );
    PyTuple_SET_ITEM( const_tuple_b0ec598a0573f7f7c6cd2538492678e4_tuple, 4, const_str_plain_crypto_secretbox_ZEROBYTES ); Py_INCREF( const_str_plain_crypto_secretbox_ZEROBYTES );
    PyTuple_SET_ITEM( const_tuple_b0ec598a0573f7f7c6cd2538492678e4_tuple, 5, const_str_plain_crypto_secretbox_open ); Py_INCREF( const_str_plain_crypto_secretbox_open );
    const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple = PyTuple_New( 17 );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 0, const_str_plain_crypto_box ); Py_INCREF( const_str_plain_crypto_box );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 1, const_str_plain_crypto_box_BEFORENMBYTES ); Py_INCREF( const_str_plain_crypto_box_BEFORENMBYTES );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 2, const_str_plain_crypto_box_BOXZEROBYTES ); Py_INCREF( const_str_plain_crypto_box_BOXZEROBYTES );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 3, const_str_plain_crypto_box_NONCEBYTES ); Py_INCREF( const_str_plain_crypto_box_NONCEBYTES );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 4, const_str_plain_crypto_box_PUBLICKEYBYTES ); Py_INCREF( const_str_plain_crypto_box_PUBLICKEYBYTES );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 5, const_str_plain_crypto_box_SEALBYTES ); Py_INCREF( const_str_plain_crypto_box_SEALBYTES );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 6, const_str_plain_crypto_box_SECRETKEYBYTES ); Py_INCREF( const_str_plain_crypto_box_SECRETKEYBYTES );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 7, const_str_plain_crypto_box_SEEDBYTES ); Py_INCREF( const_str_plain_crypto_box_SEEDBYTES );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 8, const_str_plain_crypto_box_ZEROBYTES ); Py_INCREF( const_str_plain_crypto_box_ZEROBYTES );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 9, const_str_plain_crypto_box_afternm ); Py_INCREF( const_str_plain_crypto_box_afternm );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 10, const_str_plain_crypto_box_beforenm ); Py_INCREF( const_str_plain_crypto_box_beforenm );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 11, const_str_plain_crypto_box_keypair ); Py_INCREF( const_str_plain_crypto_box_keypair );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 12, const_str_plain_crypto_box_open ); Py_INCREF( const_str_plain_crypto_box_open );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 13, const_str_plain_crypto_box_open_afternm ); Py_INCREF( const_str_plain_crypto_box_open_afternm );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 14, const_str_plain_crypto_box_seal ); Py_INCREF( const_str_plain_crypto_box_seal );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 15, const_str_plain_crypto_box_seal_open ); Py_INCREF( const_str_plain_crypto_box_seal_open );
    PyTuple_SET_ITEM( const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple, 16, const_str_plain_crypto_box_seed_keypair ); Py_INCREF( const_str_plain_crypto_box_seed_keypair );
    const_list_9b31ac6b7e6750ebaf27aca4f38ad7de_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 345178 ], 3903 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nacl$bindings( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_761dd96bbd799c76791e63cda0071447;

static void createModuleCodeObjects(void)
{
    module_filename_obj = MAKE_RELATIVE_PATH( const_str_digest_7d5ec38c0732ecbc2579b9416e1095ce );
    codeobj_761dd96bbd799c76791e63cda0071447 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_56bad0912fd812c5f3071de38f278cdb, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nacl$bindings =
{
    PyModuleDef_HEAD_INIT,
    "nacl.bindings",   /* m_name */
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

MOD_INIT_DECL( nacl$bindings )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nacl$bindings );
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
    puts("nacl.bindings: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nacl.bindings: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nacl.bindings: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnacl$bindings" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nacl$bindings = Py_InitModule4(
        "nacl.bindings",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_nacl$bindings = PyModule_Create( &mdef_nacl$bindings );
#endif

    moduledict_nacl$bindings = MODULE_DICT( module_nacl$bindings );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_nacl$bindings,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_nacl$bindings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_nacl$bindings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_nacl$bindings );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_2f5cacc4a5dd448f3b22ae6c47173e7c, module_nacl$bindings );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    PyObject *tmp_import_from_8__module = NULL;
    PyObject *tmp_import_from_9__module = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_import_name_from_24;
    PyObject *tmp_import_name_from_25;
    PyObject *tmp_import_name_from_26;
    PyObject *tmp_import_name_from_27;
    PyObject *tmp_import_name_from_28;
    PyObject *tmp_import_name_from_29;
    PyObject *tmp_import_name_from_30;
    PyObject *tmp_import_name_from_31;
    PyObject *tmp_import_name_from_32;
    PyObject *tmp_import_name_from_33;
    PyObject *tmp_import_name_from_34;
    PyObject *tmp_import_name_from_35;
    PyObject *tmp_import_name_from_36;
    PyObject *tmp_import_name_from_37;
    PyObject *tmp_import_name_from_38;
    PyObject *tmp_import_name_from_39;
    PyObject *tmp_import_name_from_40;
    PyObject *tmp_import_name_from_41;
    PyObject *tmp_import_name_from_42;
    PyObject *tmp_import_name_from_43;
    PyObject *tmp_import_name_from_44;
    PyObject *tmp_import_name_from_45;
    PyObject *tmp_import_name_from_46;
    PyObject *tmp_import_name_from_47;
    PyObject *tmp_import_name_from_48;
    PyObject *tmp_import_name_from_49;
    PyObject *tmp_import_name_from_50;
    PyObject *tmp_import_name_from_51;
    PyObject *tmp_import_name_from_52;
    PyObject *tmp_import_name_from_53;
    PyObject *tmp_import_name_from_54;
    PyObject *tmp_import_name_from_55;
    PyObject *tmp_import_name_from_56;
    PyObject *tmp_import_name_from_57;
    PyObject *tmp_import_name_from_58;
    PyObject *tmp_import_name_from_59;
    PyObject *tmp_import_name_from_60;
    PyObject *tmp_import_name_from_61;
    PyObject *tmp_import_name_from_62;
    PyObject *tmp_import_name_from_63;
    PyObject *tmp_import_name_from_64;
    PyObject *tmp_import_name_from_65;
    PyObject *tmp_import_name_from_66;
    PyObject *tmp_import_name_from_67;
    PyObject *tmp_import_name_from_68;
    PyObject *tmp_import_name_from_69;
    PyObject *tmp_import_name_from_70;
    PyObject *tmp_import_name_from_71;
    PyObject *tmp_import_name_from_72;
    PyObject *tmp_import_name_from_73;
    PyObject *tmp_import_name_from_74;
    PyObject *tmp_import_name_from_75;
    PyObject *tmp_import_name_from_76;
    PyObject *tmp_import_name_from_77;
    PyObject *tmp_import_name_from_78;
    PyObject *tmp_import_name_from_79;
    PyObject *tmp_import_name_from_80;
    PyObject *tmp_import_name_from_81;
    PyObject *tmp_import_name_from_82;
    PyObject *tmp_import_name_from_83;
    PyObject *tmp_import_name_from_84;
    PyObject *tmp_import_name_from_85;
    PyObject *tmp_import_name_from_86;
    PyObject *tmp_import_name_from_87;
    PyObject *tmp_import_name_from_88;
    PyObject *tmp_import_name_from_89;
    PyObject *tmp_import_name_from_90;
    PyObject *tmp_import_name_from_91;
    PyObject *tmp_import_name_from_92;
    PyObject *tmp_import_name_from_93;
    PyObject *tmp_import_name_from_94;
    PyObject *tmp_import_name_from_95;
    PyObject *tmp_import_name_from_96;
    PyObject *tmp_import_name_from_97;
    PyObject *tmp_import_name_from_98;
    PyObject *tmp_import_name_from_99;
    PyObject *tmp_import_name_from_100;
    PyObject *tmp_import_name_from_101;
    PyObject *tmp_import_name_from_102;
    PyObject *tmp_import_name_from_103;
    PyObject *tmp_import_name_from_104;
    PyObject *tmp_import_name_from_105;
    PyObject *tmp_import_name_from_106;
    PyObject *tmp_import_name_from_107;
    PyObject *tmp_import_name_from_108;
    PyObject *tmp_import_name_from_109;
    PyObject *tmp_import_name_from_110;
    PyObject *tmp_import_name_from_111;
    PyObject *tmp_import_name_from_112;
    PyObject *tmp_import_name_from_113;
    PyObject *tmp_import_name_from_114;
    PyObject *tmp_import_name_from_115;
    PyObject *tmp_import_name_from_116;
    PyObject *tmp_import_name_from_117;
    PyObject *tmp_import_name_from_118;
    PyObject *tmp_import_name_from_119;
    PyObject *tmp_import_name_from_120;
    PyObject *tmp_import_name_from_121;
    PyObject *tmp_import_name_from_122;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_761dd96bbd799c76791e63cda0071447;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = module_filename_obj;
    UPDATE_STRING_DICT0( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_761dd96bbd799c76791e63cda0071447 = MAKE_MODULE_FRAME( codeobj_761dd96bbd799c76791e63cda0071447, module_nacl$bindings );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_761dd96bbd799c76791e63cda0071447 );
    assert( Py_REFCNT( frame_761dd96bbd799c76791e63cda0071447 ) == 2 );

    // Framed code:
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_1 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_1 = NULL;
        }
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = module_filename_obj;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PyList_New( 3 );
    PyList_SET_ITEM( tmp_assign_source_3, 0, tmp_list_element_1 );
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_source_name_2 = PyObject_GetAttr( module, const_str_plain_path );
        }
        else
        {
            tmp_source_name_2 = NULL;
        }
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_1 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_1 = NULL;
        }
    }

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 1;
    tmp_args_element_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_824314a472ad3b8b25d9b50aea996065_tuple, 0 ) );

    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = const_str_plain_bindings;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 1;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_list_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 1, tmp_list_element_1 );
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 1;
    {
        PyObject *module = PyImport_ImportModule("os");
        if (likely( module != NULL ))
        {
            tmp_called_instance_2 = PyObject_GetAttr( module, const_str_plain_environ );
        }
        else
        {
            tmp_called_instance_2 = NULL;
        }
    }

    if ( tmp_called_instance_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 1;
    tmp_list_element_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_076a554aafe9d5c84f720ccdaf6ae40d_tuple, 0 ) );

    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_3 );

        exception_lineno = 1;

        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_assign_source_3, 2, tmp_list_element_1 );
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 15;
    tmp_assign_source_5 = PyImport_ImportModule("__future__");
    assert( !(tmp_assign_source_5 == NULL) );
    assert( tmp_import_from_1__module == NULL );
    Py_INCREF( tmp_assign_source_5 );
    tmp_import_from_1__module = tmp_assign_source_5;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_division );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_7 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_print_function );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_8 );
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

    tmp_name_name_1 = const_str_digest_c8c2411203ddb893d375add88b7df56c;
    tmp_globals_name_1 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_a074d0ef280c96356e50adbc0dfe6e02_tuple;
    tmp_level_name_1 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 17;
    tmp_assign_source_9 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_9;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_crypto_box );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box, tmp_assign_source_10 );
    tmp_import_name_from_5 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_crypto_box_BEFORENMBYTES );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_BEFORENMBYTES, tmp_assign_source_11 );
    tmp_import_name_from_6 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_crypto_box_BOXZEROBYTES );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_BOXZEROBYTES, tmp_assign_source_12 );
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_crypto_box_NONCEBYTES );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_NONCEBYTES, tmp_assign_source_13 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_crypto_box_PUBLICKEYBYTES );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_PUBLICKEYBYTES, tmp_assign_source_14 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_crypto_box_SEALBYTES );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_SEALBYTES, tmp_assign_source_15 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_crypto_box_SECRETKEYBYTES );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_SECRETKEYBYTES, tmp_assign_source_16 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_crypto_box_SEEDBYTES );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_SEEDBYTES, tmp_assign_source_17 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_crypto_box_ZEROBYTES );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_ZEROBYTES, tmp_assign_source_18 );
    tmp_import_name_from_13 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_crypto_box_afternm );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_afternm, tmp_assign_source_19 );
    tmp_import_name_from_14 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_crypto_box_beforenm );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_beforenm, tmp_assign_source_20 );
    tmp_import_name_from_15 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_crypto_box_keypair );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_keypair, tmp_assign_source_21 );
    tmp_import_name_from_16 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_crypto_box_open );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_open, tmp_assign_source_22 );
    tmp_import_name_from_17 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_crypto_box_open_afternm );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_open_afternm, tmp_assign_source_23 );
    tmp_import_name_from_18 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_crypto_box_seal );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_seal, tmp_assign_source_24 );
    tmp_import_name_from_19 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_crypto_box_seal_open );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_seal_open, tmp_assign_source_25 );
    tmp_import_name_from_20 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_crypto_box_seed_keypair );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_box_seed_keypair, tmp_assign_source_26 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_2 = const_str_digest_4a00940a335e5d2567da0bd75d62adfa;
    tmp_globals_name_2 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_701a6d2453d730e138282116e64c58b0_tuple;
    tmp_level_name_2 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 25;
    tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_27;

    // Tried code:
    tmp_import_name_from_21 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_crypto_generichash_BYTES );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_BYTES, tmp_assign_source_28 );
    tmp_import_name_from_22 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_crypto_generichash_BYTES_MAX );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_BYTES_MAX, tmp_assign_source_29 );
    tmp_import_name_from_23 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_crypto_generichash_BYTES_MIN );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_BYTES_MIN, tmp_assign_source_30 );
    tmp_import_name_from_24 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_24 );
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_crypto_generichash_KEYBYTES );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_KEYBYTES, tmp_assign_source_31 );
    tmp_import_name_from_25 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_25 );
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_crypto_generichash_KEYBYTES_MAX );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_KEYBYTES_MAX, tmp_assign_source_32 );
    tmp_import_name_from_26 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_26 );
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_crypto_generichash_KEYBYTES_MIN );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_KEYBYTES_MIN, tmp_assign_source_33 );
    tmp_import_name_from_27 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_27 );
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_crypto_generichash_PERSONALBYTES );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_PERSONALBYTES, tmp_assign_source_34 );
    tmp_import_name_from_28 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_28 );
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_crypto_generichash_SALTBYTES );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_SALTBYTES, tmp_assign_source_35 );
    tmp_import_name_from_29 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_29 );
    tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_crypto_generichash_STATEBYTES );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_STATEBYTES, tmp_assign_source_36 );
    tmp_import_name_from_30 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_30 );
    tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_generichash_blake2b_final );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_blake2b_final, tmp_assign_source_37 );
    tmp_import_name_from_31 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_31 );
    tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_generichash_blake2b_init );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_blake2b_init, tmp_assign_source_38 );
    tmp_import_name_from_32 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_32 );
    tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_generichash_blake2b_salt_personal );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_blake2b_salt_personal, tmp_assign_source_39 );
    tmp_import_name_from_33 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_33 );
    tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_generichash_blake2b_state_copy );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_blake2b_state_copy, tmp_assign_source_40 );
    tmp_import_name_from_34 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_34 );
    tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_generichash_blake2b_update );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_generichash_blake2b_update, tmp_assign_source_41 );
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_3 = const_str_digest_521070d0b21fe0ccd0518262b87694dc;
    tmp_globals_name_3 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_8ded8811b26ce4c43e4a017c2b226ff3_tuple;
    tmp_level_name_3 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 38;
    tmp_assign_source_42 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_42;

    // Tried code:
    tmp_import_name_from_35 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_35 );
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_crypto_hash );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_hash, tmp_assign_source_43 );
    tmp_import_name_from_36 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_36 );
    tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_36, const_str_plain_crypto_hash_BYTES );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_hash_BYTES, tmp_assign_source_44 );
    tmp_import_name_from_37 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_37 );
    tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_37, const_str_plain_crypto_hash_sha256 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_hash_sha256, tmp_assign_source_45 );
    tmp_import_name_from_38 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_38 );
    tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_38, const_str_plain_crypto_hash_sha256_BYTES );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_hash_sha256_BYTES, tmp_assign_source_46 );
    tmp_import_name_from_39 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_39 );
    tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_39, const_str_plain_crypto_hash_sha512 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_hash_sha512, tmp_assign_source_47 );
    tmp_import_name_from_40 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_40 );
    tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_40, const_str_plain_crypto_hash_sha512_BYTES );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_hash_sha512_BYTES, tmp_assign_source_48 );
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_4 = const_str_digest_46c1aaecc8ae90de20eab57571a02cf9;
    tmp_globals_name_4 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_8aa3812e16bb67c80d283aa113add14f_tuple;
    tmp_level_name_4 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 42;
    tmp_assign_source_49 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_49;

    // Tried code:
    tmp_import_name_from_41 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_41 );
    tmp_assign_source_50 = IMPORT_NAME( tmp_import_name_from_41, const_str_plain_crypto_pwhash_ALG_ARGON2I13 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_ALG_ARGON2I13, tmp_assign_source_50 );
    tmp_import_name_from_42 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_42 );
    tmp_assign_source_51 = IMPORT_NAME( tmp_import_name_from_42, const_str_plain_crypto_pwhash_ALG_ARGON2ID13 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_ALG_ARGON2ID13, tmp_assign_source_51 );
    tmp_import_name_from_43 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_43 );
    tmp_assign_source_52 = IMPORT_NAME( tmp_import_name_from_43, const_str_plain_crypto_pwhash_ALG_DEFAULT );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_ALG_DEFAULT, tmp_assign_source_52 );
    tmp_import_name_from_44 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_44 );
    tmp_assign_source_53 = IMPORT_NAME( tmp_import_name_from_44, const_str_plain_crypto_pwhash_BYTES_MAX );
    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_BYTES_MAX, tmp_assign_source_53 );
    tmp_import_name_from_45 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_45 );
    tmp_assign_source_54 = IMPORT_NAME( tmp_import_name_from_45, const_str_plain_crypto_pwhash_BYTES_MIN );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_BYTES_MIN, tmp_assign_source_54 );
    tmp_import_name_from_46 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_46 );
    tmp_assign_source_55 = IMPORT_NAME( tmp_import_name_from_46, const_str_plain_crypto_pwhash_PASSWD_MAX );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_PASSWD_MAX, tmp_assign_source_55 );
    tmp_import_name_from_47 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_47 );
    tmp_assign_source_56 = IMPORT_NAME( tmp_import_name_from_47, const_str_plain_crypto_pwhash_PASSWD_MIN );
    if ( tmp_assign_source_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_PASSWD_MIN, tmp_assign_source_56 );
    tmp_import_name_from_48 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_48 );
    tmp_assign_source_57 = IMPORT_NAME( tmp_import_name_from_48, const_str_plain_crypto_pwhash_SALTBYTES );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_SALTBYTES, tmp_assign_source_57 );
    tmp_import_name_from_49 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_49 );
    tmp_assign_source_58 = IMPORT_NAME( tmp_import_name_from_49, const_str_plain_crypto_pwhash_STRBYTES );
    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_STRBYTES, tmp_assign_source_58 );
    tmp_import_name_from_50 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_50 );
    tmp_assign_source_59 = IMPORT_NAME( tmp_import_name_from_50, const_str_plain_crypto_pwhash_alg );
    if ( tmp_assign_source_59 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_alg, tmp_assign_source_59 );
    tmp_import_name_from_51 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_51 );
    tmp_assign_source_60 = IMPORT_NAME( tmp_import_name_from_51, const_str_digest_d93333622e69b800e2e1fe47de24e669 );
    if ( tmp_assign_source_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_d93333622e69b800e2e1fe47de24e669, tmp_assign_source_60 );
    tmp_import_name_from_52 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_52 );
    tmp_assign_source_61 = IMPORT_NAME( tmp_import_name_from_52, const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_MAX );
    if ( tmp_assign_source_61 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_MAX, tmp_assign_source_61 );
    tmp_import_name_from_53 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_53 );
    tmp_assign_source_62 = IMPORT_NAME( tmp_import_name_from_53, const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_MIN );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_MIN, tmp_assign_source_62 );
    tmp_import_name_from_54 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_54 );
    tmp_assign_source_63 = IMPORT_NAME( tmp_import_name_from_54, const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_MODERATE );
    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_MODERATE, tmp_assign_source_63 );
    tmp_import_name_from_55 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_55 );
    tmp_assign_source_64 = IMPORT_NAME( tmp_import_name_from_55, const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_SENSITIVE );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2i_MEMLIMIT_SENSITIVE, tmp_assign_source_64 );
    tmp_import_name_from_56 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_56 );
    tmp_assign_source_65 = IMPORT_NAME( tmp_import_name_from_56, const_str_digest_1c1286498025a40111477ba6f22179d4 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_1c1286498025a40111477ba6f22179d4, tmp_assign_source_65 );
    tmp_import_name_from_57 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_57 );
    tmp_assign_source_66 = IMPORT_NAME( tmp_import_name_from_57, const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_MAX );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_MAX, tmp_assign_source_66 );
    tmp_import_name_from_58 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_58 );
    tmp_assign_source_67 = IMPORT_NAME( tmp_import_name_from_58, const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_MIN );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_MIN, tmp_assign_source_67 );
    tmp_import_name_from_59 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_59 );
    tmp_assign_source_68 = IMPORT_NAME( tmp_import_name_from_59, const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_MODERATE );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_MODERATE, tmp_assign_source_68 );
    tmp_import_name_from_60 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_60 );
    tmp_assign_source_69 = IMPORT_NAME( tmp_import_name_from_60, const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_SENSITIVE );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2i_OPSLIMIT_SENSITIVE, tmp_assign_source_69 );
    tmp_import_name_from_61 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_61 );
    tmp_assign_source_70 = IMPORT_NAME( tmp_import_name_from_61, const_str_plain_crypto_pwhash_argon2i_STRPREFIX );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2i_STRPREFIX, tmp_assign_source_70 );
    tmp_import_name_from_62 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_62 );
    tmp_assign_source_71 = IMPORT_NAME( tmp_import_name_from_62, const_str_digest_811c19800071bdb2629d74e01acf8bf7 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_811c19800071bdb2629d74e01acf8bf7, tmp_assign_source_71 );
    tmp_import_name_from_63 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_63 );
    tmp_assign_source_72 = IMPORT_NAME( tmp_import_name_from_63, const_str_plain_crypto_pwhash_argon2id_MEMLIMIT_MAX );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2id_MEMLIMIT_MAX, tmp_assign_source_72 );
    tmp_import_name_from_64 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_64 );
    tmp_assign_source_73 = IMPORT_NAME( tmp_import_name_from_64, const_str_plain_crypto_pwhash_argon2id_MEMLIMIT_MIN );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2id_MEMLIMIT_MIN, tmp_assign_source_73 );
    tmp_import_name_from_65 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_65 );
    tmp_assign_source_74 = IMPORT_NAME( tmp_import_name_from_65, const_str_plain_crypto_pwhash_argon2id_MEMLIMIT_MODERATE );
    if ( tmp_assign_source_74 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2id_MEMLIMIT_MODERATE, tmp_assign_source_74 );
    tmp_import_name_from_66 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_66 );
    tmp_assign_source_75 = IMPORT_NAME( tmp_import_name_from_66, const_str_digest_edc2e851bee295a26838acae4c3684a8 );
    if ( tmp_assign_source_75 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_edc2e851bee295a26838acae4c3684a8, tmp_assign_source_75 );
    tmp_import_name_from_67 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_67 );
    tmp_assign_source_76 = IMPORT_NAME( tmp_import_name_from_67, const_str_digest_96b79ba6f4b1fbd83cdb52c631bdb910 );
    if ( tmp_assign_source_76 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_96b79ba6f4b1fbd83cdb52c631bdb910, tmp_assign_source_76 );
    tmp_import_name_from_68 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_68 );
    tmp_assign_source_77 = IMPORT_NAME( tmp_import_name_from_68, const_str_plain_crypto_pwhash_argon2id_OPSLIMIT_MAX );
    if ( tmp_assign_source_77 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2id_OPSLIMIT_MAX, tmp_assign_source_77 );
    tmp_import_name_from_69 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_69 );
    tmp_assign_source_78 = IMPORT_NAME( tmp_import_name_from_69, const_str_plain_crypto_pwhash_argon2id_OPSLIMIT_MIN );
    if ( tmp_assign_source_78 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2id_OPSLIMIT_MIN, tmp_assign_source_78 );
    tmp_import_name_from_70 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_70 );
    tmp_assign_source_79 = IMPORT_NAME( tmp_import_name_from_70, const_str_plain_crypto_pwhash_argon2id_OPSLIMIT_MODERATE );
    if ( tmp_assign_source_79 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2id_OPSLIMIT_MODERATE, tmp_assign_source_79 );
    tmp_import_name_from_71 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_71 );
    tmp_assign_source_80 = IMPORT_NAME( tmp_import_name_from_71, const_str_digest_99b3cee5d85987c740ebf93db607f809 );
    if ( tmp_assign_source_80 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_99b3cee5d85987c740ebf93db607f809, tmp_assign_source_80 );
    tmp_import_name_from_72 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_72 );
    tmp_assign_source_81 = IMPORT_NAME( tmp_import_name_from_72, const_str_plain_crypto_pwhash_argon2id_STRPREFIX );
    if ( tmp_assign_source_81 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_argon2id_STRPREFIX, tmp_assign_source_81 );
    tmp_import_name_from_73 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_73 );
    tmp_assign_source_82 = IMPORT_NAME( tmp_import_name_from_73, const_str_digest_69b9b1db0f5d97386f8e82ff423661d4 );
    if ( tmp_assign_source_82 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_69b9b1db0f5d97386f8e82ff423661d4, tmp_assign_source_82 );
    tmp_import_name_from_74 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_74 );
    tmp_assign_source_83 = IMPORT_NAME( tmp_import_name_from_74, const_str_digest_303fc3c51c5cfd72512fcd3cc0ad7e9b );
    if ( tmp_assign_source_83 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_303fc3c51c5cfd72512fcd3cc0ad7e9b, tmp_assign_source_83 );
    tmp_import_name_from_75 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_75 );
    tmp_assign_source_84 = IMPORT_NAME( tmp_import_name_from_75, const_str_digest_0d3264d20811b34b03bfd7dafed1d686 );
    if ( tmp_assign_source_84 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_0d3264d20811b34b03bfd7dafed1d686, tmp_assign_source_84 );
    tmp_import_name_from_76 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_76 );
    tmp_assign_source_85 = IMPORT_NAME( tmp_import_name_from_76, const_str_digest_0c98e8974f4716941e2c77cd6b7f1b55 );
    if ( tmp_assign_source_85 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_0c98e8974f4716941e2c77cd6b7f1b55, tmp_assign_source_85 );
    tmp_import_name_from_77 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_77 );
    tmp_assign_source_86 = IMPORT_NAME( tmp_import_name_from_77, const_str_digest_7ecb6a1a21a321e5e6b6085924ef3c76 );
    if ( tmp_assign_source_86 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_7ecb6a1a21a321e5e6b6085924ef3c76, tmp_assign_source_86 );
    tmp_import_name_from_78 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_78 );
    tmp_assign_source_87 = IMPORT_NAME( tmp_import_name_from_78, const_str_digest_4030f6953a665f3682d1f69d98056029 );
    if ( tmp_assign_source_87 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_4030f6953a665f3682d1f69d98056029, tmp_assign_source_87 );
    tmp_import_name_from_79 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_79 );
    tmp_assign_source_88 = IMPORT_NAME( tmp_import_name_from_79, const_str_digest_cce787bed8426b8a1550947a1d5637fc );
    if ( tmp_assign_source_88 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_cce787bed8426b8a1550947a1d5637fc, tmp_assign_source_88 );
    tmp_import_name_from_80 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_80 );
    tmp_assign_source_89 = IMPORT_NAME( tmp_import_name_from_80, const_str_digest_aace0907f72e900aefebc81264394a2d );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_aace0907f72e900aefebc81264394a2d, tmp_assign_source_89 );
    tmp_import_name_from_81 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_81 );
    tmp_assign_source_90 = IMPORT_NAME( tmp_import_name_from_81, const_str_digest_4d9630d02406d41c494d64e09d0080e5 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_4d9630d02406d41c494d64e09d0080e5, tmp_assign_source_90 );
    tmp_import_name_from_82 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_82 );
    tmp_assign_source_91 = IMPORT_NAME( tmp_import_name_from_82, const_str_digest_cb591129d1b5accd433f40ca859f83a6 );
    if ( tmp_assign_source_91 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_cb591129d1b5accd433f40ca859f83a6, tmp_assign_source_91 );
    tmp_import_name_from_83 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_83 );
    tmp_assign_source_92 = IMPORT_NAME( tmp_import_name_from_83, const_str_digest_1f06c2245a21ae44c3ba8fa825fbe3f1 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_1f06c2245a21ae44c3ba8fa825fbe3f1, tmp_assign_source_92 );
    tmp_import_name_from_84 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_84 );
    tmp_assign_source_93 = IMPORT_NAME( tmp_import_name_from_84, const_str_digest_9e9ed4aa0c3568e08792285232c33d4b );
    if ( tmp_assign_source_93 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_9e9ed4aa0c3568e08792285232c33d4b, tmp_assign_source_93 );
    tmp_import_name_from_85 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_85 );
    tmp_assign_source_94 = IMPORT_NAME( tmp_import_name_from_85, const_str_digest_52988674049cd030e8a1e18212efe1d8 );
    if ( tmp_assign_source_94 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_52988674049cd030e8a1e18212efe1d8, tmp_assign_source_94 );
    tmp_import_name_from_86 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_86 );
    tmp_assign_source_95 = IMPORT_NAME( tmp_import_name_from_86, const_str_digest_4c3a8ad073ec574e6d9f7a94b0a2c3b2 );
    if ( tmp_assign_source_95 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_4c3a8ad073ec574e6d9f7a94b0a2c3b2, tmp_assign_source_95 );
    tmp_import_name_from_87 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_87 );
    tmp_assign_source_96 = IMPORT_NAME( tmp_import_name_from_87, const_str_digest_f13d4b3c6fe30552c11ba1a5e01fc1de );
    if ( tmp_assign_source_96 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_f13d4b3c6fe30552c11ba1a5e01fc1de, tmp_assign_source_96 );
    tmp_import_name_from_88 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_88 );
    tmp_assign_source_97 = IMPORT_NAME( tmp_import_name_from_88, const_str_plain_crypto_pwhash_scryptsalsa208sha256_ll );
    if ( tmp_assign_source_97 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_scryptsalsa208sha256_ll, tmp_assign_source_97 );
    tmp_import_name_from_89 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_89 );
    tmp_assign_source_98 = IMPORT_NAME( tmp_import_name_from_89, const_str_plain_crypto_pwhash_scryptsalsa208sha256_str );
    if ( tmp_assign_source_98 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_scryptsalsa208sha256_str, tmp_assign_source_98 );
    tmp_import_name_from_90 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_90 );
    tmp_assign_source_99 = IMPORT_NAME( tmp_import_name_from_90, const_str_digest_955c4ac94da4dcc37d90fba3d863f772 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_digest_955c4ac94da4dcc37d90fba3d863f772, tmp_assign_source_99 );
    tmp_import_name_from_91 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_91 );
    tmp_assign_source_100 = IMPORT_NAME( tmp_import_name_from_91, const_str_plain_crypto_pwhash_str_alg );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_str_alg, tmp_assign_source_100 );
    tmp_import_name_from_92 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_92 );
    tmp_assign_source_101 = IMPORT_NAME( tmp_import_name_from_92, const_str_plain_crypto_pwhash_str_verify );
    if ( tmp_assign_source_101 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_pwhash_str_verify, tmp_assign_source_101 );
    tmp_import_name_from_93 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_93 );
    tmp_assign_source_102 = IMPORT_NAME( tmp_import_name_from_93, const_str_plain_nacl_bindings_pick_scrypt_params );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_nacl_bindings_pick_scrypt_params, tmp_assign_source_102 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    tmp_name_name_5 = const_str_digest_6e8ace5ae1348982a84f5d14e0a68a9d;
    tmp_globals_name_5 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_2d043b331bccbd22c9124dcdd011f383_tuple;
    tmp_level_name_5 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 97;
    tmp_assign_source_103 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_103 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_6__module == NULL );
    tmp_import_from_6__module = tmp_assign_source_103;

    // Tried code:
    tmp_import_name_from_94 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_94 );
    tmp_assign_source_104 = IMPORT_NAME( tmp_import_name_from_94, const_str_plain_crypto_scalarmult );
    if ( tmp_assign_source_104 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_scalarmult, tmp_assign_source_104 );
    tmp_import_name_from_95 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_95 );
    tmp_assign_source_105 = IMPORT_NAME( tmp_import_name_from_95, const_str_plain_crypto_scalarmult_BYTES );
    if ( tmp_assign_source_105 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_scalarmult_BYTES, tmp_assign_source_105 );
    tmp_import_name_from_96 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_96 );
    tmp_assign_source_106 = IMPORT_NAME( tmp_import_name_from_96, const_str_plain_crypto_scalarmult_SCALARBYTES );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_scalarmult_SCALARBYTES, tmp_assign_source_106 );
    tmp_import_name_from_97 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_97 );
    tmp_assign_source_107 = IMPORT_NAME( tmp_import_name_from_97, const_str_plain_crypto_scalarmult_base );
    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_scalarmult_base, tmp_assign_source_107 );
    goto try_end_6;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    tmp_name_name_6 = const_str_digest_2a4fa1aa9fdca6eac9f1f9434eb3878d;
    tmp_globals_name_6 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_b0ec598a0573f7f7c6cd2538492678e4_tuple;
    tmp_level_name_6 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 101;
    tmp_assign_source_108 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_108 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_7__module == NULL );
    tmp_import_from_7__module = tmp_assign_source_108;

    // Tried code:
    tmp_import_name_from_98 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_98 );
    tmp_assign_source_109 = IMPORT_NAME( tmp_import_name_from_98, const_str_plain_crypto_secretbox );
    if ( tmp_assign_source_109 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_secretbox, tmp_assign_source_109 );
    tmp_import_name_from_99 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_99 );
    tmp_assign_source_110 = IMPORT_NAME( tmp_import_name_from_99, const_str_plain_crypto_secretbox_BOXZEROBYTES );
    if ( tmp_assign_source_110 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_secretbox_BOXZEROBYTES, tmp_assign_source_110 );
    tmp_import_name_from_100 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_100 );
    tmp_assign_source_111 = IMPORT_NAME( tmp_import_name_from_100, const_str_plain_crypto_secretbox_KEYBYTES );
    if ( tmp_assign_source_111 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_secretbox_KEYBYTES, tmp_assign_source_111 );
    tmp_import_name_from_101 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_101 );
    tmp_assign_source_112 = IMPORT_NAME( tmp_import_name_from_101, const_str_plain_crypto_secretbox_NONCEBYTES );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_secretbox_NONCEBYTES, tmp_assign_source_112 );
    tmp_import_name_from_102 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_102 );
    tmp_assign_source_113 = IMPORT_NAME( tmp_import_name_from_102, const_str_plain_crypto_secretbox_ZEROBYTES );
    if ( tmp_assign_source_113 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_secretbox_ZEROBYTES, tmp_assign_source_113 );
    tmp_import_name_from_103 = tmp_import_from_7__module;

    CHECK_OBJECT( tmp_import_name_from_103 );
    tmp_assign_source_114 = IMPORT_NAME( tmp_import_name_from_103, const_str_plain_crypto_secretbox_open );
    if ( tmp_assign_source_114 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;

        goto try_except_handler_7;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_secretbox_open, tmp_assign_source_114 );
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_7__module );
    Py_DECREF( tmp_import_from_7__module );
    tmp_import_from_7__module = NULL;

    tmp_name_name_7 = const_str_digest_78c141ea35f5d6417ddefa9cf9d32a3a;
    tmp_globals_name_7 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_5678ed613d7da51393c811b5c4e6905a_tuple;
    tmp_level_name_7 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 106;
    tmp_assign_source_115 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_8__module == NULL );
    tmp_import_from_8__module = tmp_assign_source_115;

    // Tried code:
    tmp_import_name_from_104 = tmp_import_from_8__module;

    CHECK_OBJECT( tmp_import_name_from_104 );
    tmp_assign_source_116 = IMPORT_NAME( tmp_import_name_from_104, const_str_plain_BYTES );
    if ( tmp_assign_source_116 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_shorthash_siphash24_BYTES, tmp_assign_source_116 );
    tmp_import_name_from_105 = tmp_import_from_8__module;

    CHECK_OBJECT( tmp_import_name_from_105 );
    tmp_assign_source_117 = IMPORT_NAME( tmp_import_name_from_105, const_str_plain_KEYBYTES );
    if ( tmp_assign_source_117 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_shorthash_siphash24_KEYBYTES, tmp_assign_source_117 );
    tmp_import_name_from_106 = tmp_import_from_8__module;

    CHECK_OBJECT( tmp_import_name_from_106 );
    tmp_assign_source_118 = IMPORT_NAME( tmp_import_name_from_106, const_str_plain_XBYTES );
    if ( tmp_assign_source_118 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_shorthash_siphashx24_BYTES, tmp_assign_source_118 );
    tmp_import_name_from_107 = tmp_import_from_8__module;

    CHECK_OBJECT( tmp_import_name_from_107 );
    tmp_assign_source_119 = IMPORT_NAME( tmp_import_name_from_107, const_str_plain_XKEYBYTES );
    if ( tmp_assign_source_119 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_shorthash_siphashx24_KEYBYTES, tmp_assign_source_119 );
    tmp_import_name_from_108 = tmp_import_from_8__module;

    CHECK_OBJECT( tmp_import_name_from_108 );
    tmp_assign_source_120 = IMPORT_NAME( tmp_import_name_from_108, const_str_plain_crypto_shorthash_siphash24 );
    if ( tmp_assign_source_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_shorthash_siphash24, tmp_assign_source_120 );
    tmp_import_name_from_109 = tmp_import_from_8__module;

    CHECK_OBJECT( tmp_import_name_from_109 );
    tmp_assign_source_121 = IMPORT_NAME( tmp_import_name_from_109, const_str_plain_crypto_shorthash_siphashx24 );
    if ( tmp_assign_source_121 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;

        goto try_except_handler_8;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_shorthash_siphashx24, tmp_assign_source_121 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_8__module );
    Py_DECREF( tmp_import_from_8__module );
    tmp_import_from_8__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_8__module );
    Py_DECREF( tmp_import_from_8__module );
    tmp_import_from_8__module = NULL;

    tmp_name_name_8 = const_str_digest_fa166413682902fd321f04ea5d7466ad;
    tmp_globals_name_8 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_3bbf8373ccb62e1d5bd0337392044c7e_tuple;
    tmp_level_name_8 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 114;
    tmp_assign_source_122 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_9__module == NULL );
    tmp_import_from_9__module = tmp_assign_source_122;

    // Tried code:
    tmp_import_name_from_110 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_110 );
    tmp_assign_source_123 = IMPORT_NAME( tmp_import_name_from_110, const_str_plain_crypto_sign );
    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign, tmp_assign_source_123 );
    tmp_import_name_from_111 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_111 );
    tmp_assign_source_124 = IMPORT_NAME( tmp_import_name_from_111, const_str_plain_crypto_sign_BYTES );
    if ( tmp_assign_source_124 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign_BYTES, tmp_assign_source_124 );
    tmp_import_name_from_112 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_112 );
    tmp_assign_source_125 = IMPORT_NAME( tmp_import_name_from_112, const_str_plain_crypto_sign_PUBLICKEYBYTES );
    if ( tmp_assign_source_125 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign_PUBLICKEYBYTES, tmp_assign_source_125 );
    tmp_import_name_from_113 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_113 );
    tmp_assign_source_126 = IMPORT_NAME( tmp_import_name_from_113, const_str_plain_crypto_sign_SECRETKEYBYTES );
    if ( tmp_assign_source_126 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign_SECRETKEYBYTES, tmp_assign_source_126 );
    tmp_import_name_from_114 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_114 );
    tmp_assign_source_127 = IMPORT_NAME( tmp_import_name_from_114, const_str_plain_crypto_sign_SEEDBYTES );
    if ( tmp_assign_source_127 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign_SEEDBYTES, tmp_assign_source_127 );
    tmp_import_name_from_115 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_115 );
    tmp_assign_source_128 = IMPORT_NAME( tmp_import_name_from_115, const_str_plain_crypto_sign_ed25519_pk_to_curve25519 );
    if ( tmp_assign_source_128 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign_ed25519_pk_to_curve25519, tmp_assign_source_128 );
    tmp_import_name_from_116 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_116 );
    tmp_assign_source_129 = IMPORT_NAME( tmp_import_name_from_116, const_str_plain_crypto_sign_ed25519_sk_to_curve25519 );
    if ( tmp_assign_source_129 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign_ed25519_sk_to_curve25519, tmp_assign_source_129 );
    tmp_import_name_from_117 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_117 );
    tmp_assign_source_130 = IMPORT_NAME( tmp_import_name_from_117, const_str_plain_crypto_sign_keypair );
    if ( tmp_assign_source_130 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign_keypair, tmp_assign_source_130 );
    tmp_import_name_from_118 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_118 );
    tmp_assign_source_131 = IMPORT_NAME( tmp_import_name_from_118, const_str_plain_crypto_sign_open );
    if ( tmp_assign_source_131 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign_open, tmp_assign_source_131 );
    tmp_import_name_from_119 = tmp_import_from_9__module;

    CHECK_OBJECT( tmp_import_name_from_119 );
    tmp_assign_source_132 = IMPORT_NAME( tmp_import_name_from_119, const_str_plain_crypto_sign_seed_keypair );
    if ( tmp_assign_source_132 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;

        goto try_except_handler_9;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_crypto_sign_seed_keypair, tmp_assign_source_132 );
    goto try_end_9;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_9__module );
    Py_DECREF( tmp_import_from_9__module );
    tmp_import_from_9__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_9__module );
    Py_DECREF( tmp_import_from_9__module );
    tmp_import_from_9__module = NULL;

    tmp_name_name_9 = const_str_digest_e86187ccc4d6f568b5323f8a2043c263;
    tmp_globals_name_9 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_randombytes_tuple;
    tmp_level_name_9 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 120;
    tmp_import_name_from_120 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_120 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_133 = IMPORT_NAME( tmp_import_name_from_120, const_str_plain_randombytes );
    Py_DECREF( tmp_import_name_from_120 );
    if ( tmp_assign_source_133 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_randombytes, tmp_assign_source_133 );
    tmp_name_name_10 = const_str_digest_0a6da34c88a1116e23b0f8700cfb162f;
    tmp_globals_name_10 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_sodium_init_tuple;
    tmp_level_name_10 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 121;
    tmp_import_name_from_121 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_121 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_134 = IMPORT_NAME( tmp_import_name_from_121, const_str_plain_sodium_init );
    Py_DECREF( tmp_import_name_from_121 );
    if ( tmp_assign_source_134 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_sodium_init, tmp_assign_source_134 );
    tmp_name_name_11 = const_str_digest_f271c343ef77af259e7887cb5e597565;
    tmp_globals_name_11 = (PyObject *)moduledict_nacl$bindings;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_sodium_memcmp_tuple;
    tmp_level_name_11 = const_int_0;
    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 122;
    tmp_import_name_from_122 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_135 = IMPORT_NAME( tmp_import_name_from_122, const_str_plain_sodium_memcmp );
    Py_DECREF( tmp_import_name_from_122 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_sodium_memcmp, tmp_assign_source_135 );
    tmp_assign_source_136 = LIST_COPY( const_list_9b31ac6b7e6750ebaf27aca4f38ad7de_list );
    UPDATE_STRING_DICT1( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_136 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nacl$bindings, (Nuitka_StringObject *)const_str_plain_sodium_init );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sodium_init );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sodium_init" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 266;

        goto frame_exception_exit_1;
    }

    frame_761dd96bbd799c76791e63cda0071447->m_frame.f_lineno = 266;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_761dd96bbd799c76791e63cda0071447 );
#endif
    popFrameStack();

    assertFrameObject( frame_761dd96bbd799c76791e63cda0071447 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_761dd96bbd799c76791e63cda0071447 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_761dd96bbd799c76791e63cda0071447, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_761dd96bbd799c76791e63cda0071447->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_761dd96bbd799c76791e63cda0071447, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_nacl$bindings );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
