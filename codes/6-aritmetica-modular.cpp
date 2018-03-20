/** -------------------------------------------------------------------------- **/
/** Aritmetica Modula **/
/** -------------------------------------------------------------------------- **/

// Soma
(x + y) mod n =>
((x mod n) + (y mod n)) mod n

// Multiplicacao
(x.y) mod n =>
((x mod n) . (y mod n)) mod n

// Exponencial
(x^y) mod n =>
((x mod n) ^ y) mod n

// Exponencial alto
// -> Divida y/2 e realiza a conta e multiplica seu resultado
//    5^117 mod 19.
//    117 = 1110101 em binario.
//    117 = (2^0 + 2^2 + 2^4 + 2^5 + 2^6)
//    117 = 1 + 4 + 16 + 32 + 64
//    5^117 mod 19 = 5^(1+4+16+32+64) mod 19
//    5^117 mod 19 = (5^1 x 5^4 x 5^16 x 5^32 x 5^64) mod 19