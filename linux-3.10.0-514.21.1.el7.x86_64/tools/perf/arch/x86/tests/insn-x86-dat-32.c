/*
 * Generated by gen-insn-x86-dat.sh and gen-insn-x86-dat.awk
 * from insn-x86-dat-src.c for inclusion by insn-x86.c
 * Do not change this code.
*/

{{0x0f, 0x31, }, 2, 0, "", "",
"0f 31                \trdtsc  ",},
{{0xf3, 0x0f, 0x1b, 0x00, }, 4, 0, "", "",
"f3 0f 1b 00          \tbndmk  (%eax),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f3 0f 1b 05 78 56 34 12 \tbndmk  0x12345678,%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x18, }, 4, 0, "", "",
"f3 0f 1b 18          \tbndmk  (%eax),%bnd3",},
{{0xf3, 0x0f, 0x1b, 0x04, 0x01, }, 5, 0, "", "",
"f3 0f 1b 04 01       \tbndmk  (%ecx,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1b 04 05 78 56 34 12 \tbndmk  0x12345678(,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x04, 0x08, }, 5, 0, "", "",
"f3 0f 1b 04 08       \tbndmk  (%eax,%ecx,1),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x04, 0xc8, }, 5, 0, "", "",
"f3 0f 1b 04 c8       \tbndmk  (%eax,%ecx,8),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x40, 0x12, }, 5, 0, "", "",
"f3 0f 1b 40 12       \tbndmk  0x12(%eax),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x45, 0x12, }, 5, 0, "", "",
"f3 0f 1b 45 12       \tbndmk  0x12(%ebp),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"f3 0f 1b 44 01 12    \tbndmk  0x12(%ecx,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"f3 0f 1b 44 05 12    \tbndmk  0x12(%ebp,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"f3 0f 1b 44 08 12    \tbndmk  0x12(%eax,%ecx,1),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"f3 0f 1b 44 c8 12    \tbndmk  0x12(%eax,%ecx,8),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f3 0f 1b 80 78 56 34 12 \tbndmk  0x12345678(%eax),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f3 0f 1b 85 78 56 34 12 \tbndmk  0x12345678(%ebp),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1b 84 01 78 56 34 12 \tbndmk  0x12345678(%ecx,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1b 84 05 78 56 34 12 \tbndmk  0x12345678(%ebp,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1b 84 08 78 56 34 12 \tbndmk  0x12345678(%eax,%ecx,1),%bnd0",},
{{0xf3, 0x0f, 0x1b, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1b 84 c8 78 56 34 12 \tbndmk  0x12345678(%eax,%ecx,8),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x00, }, 4, 0, "", "",
"f3 0f 1a 00          \tbndcl  (%eax),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f3 0f 1a 05 78 56 34 12 \tbndcl  0x12345678,%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x18, }, 4, 0, "", "",
"f3 0f 1a 18          \tbndcl  (%eax),%bnd3",},
{{0xf3, 0x0f, 0x1a, 0x04, 0x01, }, 5, 0, "", "",
"f3 0f 1a 04 01       \tbndcl  (%ecx,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1a 04 05 78 56 34 12 \tbndcl  0x12345678(,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x04, 0x08, }, 5, 0, "", "",
"f3 0f 1a 04 08       \tbndcl  (%eax,%ecx,1),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x04, 0xc8, }, 5, 0, "", "",
"f3 0f 1a 04 c8       \tbndcl  (%eax,%ecx,8),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x40, 0x12, }, 5, 0, "", "",
"f3 0f 1a 40 12       \tbndcl  0x12(%eax),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x45, 0x12, }, 5, 0, "", "",
"f3 0f 1a 45 12       \tbndcl  0x12(%ebp),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"f3 0f 1a 44 01 12    \tbndcl  0x12(%ecx,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"f3 0f 1a 44 05 12    \tbndcl  0x12(%ebp,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"f3 0f 1a 44 08 12    \tbndcl  0x12(%eax,%ecx,1),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"f3 0f 1a 44 c8 12    \tbndcl  0x12(%eax,%ecx,8),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f3 0f 1a 80 78 56 34 12 \tbndcl  0x12345678(%eax),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f3 0f 1a 85 78 56 34 12 \tbndcl  0x12345678(%ebp),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1a 84 01 78 56 34 12 \tbndcl  0x12345678(%ecx,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1a 84 05 78 56 34 12 \tbndcl  0x12345678(%ebp,%eax,1),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1a 84 08 78 56 34 12 \tbndcl  0x12345678(%eax,%ecx,1),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f3 0f 1a 84 c8 78 56 34 12 \tbndcl  0x12345678(%eax,%ecx,8),%bnd0",},
{{0xf3, 0x0f, 0x1a, 0xc0, }, 4, 0, "", "",
"f3 0f 1a c0          \tbndcl  %eax,%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x00, }, 4, 0, "", "",
"f2 0f 1a 00          \tbndcu  (%eax),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f2 0f 1a 05 78 56 34 12 \tbndcu  0x12345678,%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x18, }, 4, 0, "", "",
"f2 0f 1a 18          \tbndcu  (%eax),%bnd3",},
{{0xf2, 0x0f, 0x1a, 0x04, 0x01, }, 5, 0, "", "",
"f2 0f 1a 04 01       \tbndcu  (%ecx,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1a 04 05 78 56 34 12 \tbndcu  0x12345678(,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x04, 0x08, }, 5, 0, "", "",
"f2 0f 1a 04 08       \tbndcu  (%eax,%ecx,1),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x04, 0xc8, }, 5, 0, "", "",
"f2 0f 1a 04 c8       \tbndcu  (%eax,%ecx,8),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x40, 0x12, }, 5, 0, "", "",
"f2 0f 1a 40 12       \tbndcu  0x12(%eax),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x45, 0x12, }, 5, 0, "", "",
"f2 0f 1a 45 12       \tbndcu  0x12(%ebp),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"f2 0f 1a 44 01 12    \tbndcu  0x12(%ecx,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"f2 0f 1a 44 05 12    \tbndcu  0x12(%ebp,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"f2 0f 1a 44 08 12    \tbndcu  0x12(%eax,%ecx,1),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"f2 0f 1a 44 c8 12    \tbndcu  0x12(%eax,%ecx,8),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f2 0f 1a 80 78 56 34 12 \tbndcu  0x12345678(%eax),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f2 0f 1a 85 78 56 34 12 \tbndcu  0x12345678(%ebp),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1a 84 01 78 56 34 12 \tbndcu  0x12345678(%ecx,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1a 84 05 78 56 34 12 \tbndcu  0x12345678(%ebp,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1a 84 08 78 56 34 12 \tbndcu  0x12345678(%eax,%ecx,1),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1a 84 c8 78 56 34 12 \tbndcu  0x12345678(%eax,%ecx,8),%bnd0",},
{{0xf2, 0x0f, 0x1a, 0xc0, }, 4, 0, "", "",
"f2 0f 1a c0          \tbndcu  %eax,%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x00, }, 4, 0, "", "",
"f2 0f 1b 00          \tbndcn  (%eax),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f2 0f 1b 05 78 56 34 12 \tbndcn  0x12345678,%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x18, }, 4, 0, "", "",
"f2 0f 1b 18          \tbndcn  (%eax),%bnd3",},
{{0xf2, 0x0f, 0x1b, 0x04, 0x01, }, 5, 0, "", "",
"f2 0f 1b 04 01       \tbndcn  (%ecx,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1b 04 05 78 56 34 12 \tbndcn  0x12345678(,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x04, 0x08, }, 5, 0, "", "",
"f2 0f 1b 04 08       \tbndcn  (%eax,%ecx,1),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x04, 0xc8, }, 5, 0, "", "",
"f2 0f 1b 04 c8       \tbndcn  (%eax,%ecx,8),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x40, 0x12, }, 5, 0, "", "",
"f2 0f 1b 40 12       \tbndcn  0x12(%eax),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x45, 0x12, }, 5, 0, "", "",
"f2 0f 1b 45 12       \tbndcn  0x12(%ebp),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"f2 0f 1b 44 01 12    \tbndcn  0x12(%ecx,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"f2 0f 1b 44 05 12    \tbndcn  0x12(%ebp,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"f2 0f 1b 44 08 12    \tbndcn  0x12(%eax,%ecx,1),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"f2 0f 1b 44 c8 12    \tbndcn  0x12(%eax,%ecx,8),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f2 0f 1b 80 78 56 34 12 \tbndcn  0x12345678(%eax),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"f2 0f 1b 85 78 56 34 12 \tbndcn  0x12345678(%ebp),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1b 84 01 78 56 34 12 \tbndcn  0x12345678(%ecx,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1b 84 05 78 56 34 12 \tbndcn  0x12345678(%ebp,%eax,1),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1b 84 08 78 56 34 12 \tbndcn  0x12345678(%eax,%ecx,1),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"f2 0f 1b 84 c8 78 56 34 12 \tbndcn  0x12345678(%eax,%ecx,8),%bnd0",},
{{0xf2, 0x0f, 0x1b, 0xc0, }, 4, 0, "", "",
"f2 0f 1b c0          \tbndcn  %eax,%bnd0",},
{{0x66, 0x0f, 0x1a, 0x00, }, 4, 0, "", "",
"66 0f 1a 00          \tbndmov (%eax),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"66 0f 1a 05 78 56 34 12 \tbndmov 0x12345678,%bnd0",},
{{0x66, 0x0f, 0x1a, 0x18, }, 4, 0, "", "",
"66 0f 1a 18          \tbndmov (%eax),%bnd3",},
{{0x66, 0x0f, 0x1a, 0x04, 0x01, }, 5, 0, "", "",
"66 0f 1a 04 01       \tbndmov (%ecx,%eax,1),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1a 04 05 78 56 34 12 \tbndmov 0x12345678(,%eax,1),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x04, 0x08, }, 5, 0, "", "",
"66 0f 1a 04 08       \tbndmov (%eax,%ecx,1),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x04, 0xc8, }, 5, 0, "", "",
"66 0f 1a 04 c8       \tbndmov (%eax,%ecx,8),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x40, 0x12, }, 5, 0, "", "",
"66 0f 1a 40 12       \tbndmov 0x12(%eax),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x45, 0x12, }, 5, 0, "", "",
"66 0f 1a 45 12       \tbndmov 0x12(%ebp),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"66 0f 1a 44 01 12    \tbndmov 0x12(%ecx,%eax,1),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"66 0f 1a 44 05 12    \tbndmov 0x12(%ebp,%eax,1),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"66 0f 1a 44 08 12    \tbndmov 0x12(%eax,%ecx,1),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"66 0f 1a 44 c8 12    \tbndmov 0x12(%eax,%ecx,8),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"66 0f 1a 80 78 56 34 12 \tbndmov 0x12345678(%eax),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"66 0f 1a 85 78 56 34 12 \tbndmov 0x12345678(%ebp),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1a 84 01 78 56 34 12 \tbndmov 0x12345678(%ecx,%eax,1),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1a 84 05 78 56 34 12 \tbndmov 0x12345678(%ebp,%eax,1),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1a 84 08 78 56 34 12 \tbndmov 0x12345678(%eax,%ecx,1),%bnd0",},
{{0x66, 0x0f, 0x1a, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1a 84 c8 78 56 34 12 \tbndmov 0x12345678(%eax,%ecx,8),%bnd0",},
{{0x66, 0x0f, 0x1b, 0x00, }, 4, 0, "", "",
"66 0f 1b 00          \tbndmov %bnd0,(%eax)",},
{{0x66, 0x0f, 0x1b, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"66 0f 1b 05 78 56 34 12 \tbndmov %bnd0,0x12345678",},
{{0x66, 0x0f, 0x1b, 0x18, }, 4, 0, "", "",
"66 0f 1b 18          \tbndmov %bnd3,(%eax)",},
{{0x66, 0x0f, 0x1b, 0x04, 0x01, }, 5, 0, "", "",
"66 0f 1b 04 01       \tbndmov %bnd0,(%ecx,%eax,1)",},
{{0x66, 0x0f, 0x1b, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1b 04 05 78 56 34 12 \tbndmov %bnd0,0x12345678(,%eax,1)",},
{{0x66, 0x0f, 0x1b, 0x04, 0x08, }, 5, 0, "", "",
"66 0f 1b 04 08       \tbndmov %bnd0,(%eax,%ecx,1)",},
{{0x66, 0x0f, 0x1b, 0x04, 0xc8, }, 5, 0, "", "",
"66 0f 1b 04 c8       \tbndmov %bnd0,(%eax,%ecx,8)",},
{{0x66, 0x0f, 0x1b, 0x40, 0x12, }, 5, 0, "", "",
"66 0f 1b 40 12       \tbndmov %bnd0,0x12(%eax)",},
{{0x66, 0x0f, 0x1b, 0x45, 0x12, }, 5, 0, "", "",
"66 0f 1b 45 12       \tbndmov %bnd0,0x12(%ebp)",},
{{0x66, 0x0f, 0x1b, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"66 0f 1b 44 01 12    \tbndmov %bnd0,0x12(%ecx,%eax,1)",},
{{0x66, 0x0f, 0x1b, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"66 0f 1b 44 05 12    \tbndmov %bnd0,0x12(%ebp,%eax,1)",},
{{0x66, 0x0f, 0x1b, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"66 0f 1b 44 08 12    \tbndmov %bnd0,0x12(%eax,%ecx,1)",},
{{0x66, 0x0f, 0x1b, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"66 0f 1b 44 c8 12    \tbndmov %bnd0,0x12(%eax,%ecx,8)",},
{{0x66, 0x0f, 0x1b, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"66 0f 1b 80 78 56 34 12 \tbndmov %bnd0,0x12345678(%eax)",},
{{0x66, 0x0f, 0x1b, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"66 0f 1b 85 78 56 34 12 \tbndmov %bnd0,0x12345678(%ebp)",},
{{0x66, 0x0f, 0x1b, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1b 84 01 78 56 34 12 \tbndmov %bnd0,0x12345678(%ecx,%eax,1)",},
{{0x66, 0x0f, 0x1b, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1b 84 05 78 56 34 12 \tbndmov %bnd0,0x12345678(%ebp,%eax,1)",},
{{0x66, 0x0f, 0x1b, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1b 84 08 78 56 34 12 \tbndmov %bnd0,0x12345678(%eax,%ecx,1)",},
{{0x66, 0x0f, 0x1b, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f 1b 84 c8 78 56 34 12 \tbndmov %bnd0,0x12345678(%eax,%ecx,8)",},
{{0x66, 0x0f, 0x1a, 0xc8, }, 4, 0, "", "",
"66 0f 1a c8          \tbndmov %bnd0,%bnd1",},
{{0x66, 0x0f, 0x1a, 0xc1, }, 4, 0, "", "",
"66 0f 1a c1          \tbndmov %bnd1,%bnd0",},
{{0x0f, 0x1a, 0x00, }, 3, 0, "", "",
"0f 1a 00             \tbndldx (%eax),%bnd0",},
{{0x0f, 0x1a, 0x05, 0x78, 0x56, 0x34, 0x12, }, 7, 0, "", "",
"0f 1a 05 78 56 34 12 \tbndldx 0x12345678,%bnd0",},
{{0x0f, 0x1a, 0x18, }, 3, 0, "", "",
"0f 1a 18             \tbndldx (%eax),%bnd3",},
{{0x0f, 0x1a, 0x04, 0x01, }, 4, 0, "", "",
"0f 1a 04 01          \tbndldx (%ecx,%eax,1),%bnd0",},
{{0x0f, 0x1a, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 1a 04 05 78 56 34 12 \tbndldx 0x12345678(,%eax,1),%bnd0",},
{{0x0f, 0x1a, 0x04, 0x08, }, 4, 0, "", "",
"0f 1a 04 08          \tbndldx (%eax,%ecx,1),%bnd0",},
{{0x0f, 0x1a, 0x40, 0x12, }, 4, 0, "", "",
"0f 1a 40 12          \tbndldx 0x12(%eax),%bnd0",},
{{0x0f, 0x1a, 0x45, 0x12, }, 4, 0, "", "",
"0f 1a 45 12          \tbndldx 0x12(%ebp),%bnd0",},
{{0x0f, 0x1a, 0x44, 0x01, 0x12, }, 5, 0, "", "",
"0f 1a 44 01 12       \tbndldx 0x12(%ecx,%eax,1),%bnd0",},
{{0x0f, 0x1a, 0x44, 0x05, 0x12, }, 5, 0, "", "",
"0f 1a 44 05 12       \tbndldx 0x12(%ebp,%eax,1),%bnd0",},
{{0x0f, 0x1a, 0x44, 0x08, 0x12, }, 5, 0, "", "",
"0f 1a 44 08 12       \tbndldx 0x12(%eax,%ecx,1),%bnd0",},
{{0x0f, 0x1a, 0x80, 0x78, 0x56, 0x34, 0x12, }, 7, 0, "", "",
"0f 1a 80 78 56 34 12 \tbndldx 0x12345678(%eax),%bnd0",},
{{0x0f, 0x1a, 0x85, 0x78, 0x56, 0x34, 0x12, }, 7, 0, "", "",
"0f 1a 85 78 56 34 12 \tbndldx 0x12345678(%ebp),%bnd0",},
{{0x0f, 0x1a, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 1a 84 01 78 56 34 12 \tbndldx 0x12345678(%ecx,%eax,1),%bnd0",},
{{0x0f, 0x1a, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 1a 84 05 78 56 34 12 \tbndldx 0x12345678(%ebp,%eax,1),%bnd0",},
{{0x0f, 0x1a, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 1a 84 08 78 56 34 12 \tbndldx 0x12345678(%eax,%ecx,1),%bnd0",},
{{0x0f, 0x1b, 0x00, }, 3, 0, "", "",
"0f 1b 00             \tbndstx %bnd0,(%eax)",},
{{0x0f, 0x1b, 0x05, 0x78, 0x56, 0x34, 0x12, }, 7, 0, "", "",
"0f 1b 05 78 56 34 12 \tbndstx %bnd0,0x12345678",},
{{0x0f, 0x1b, 0x18, }, 3, 0, "", "",
"0f 1b 18             \tbndstx %bnd3,(%eax)",},
{{0x0f, 0x1b, 0x04, 0x01, }, 4, 0, "", "",
"0f 1b 04 01          \tbndstx %bnd0,(%ecx,%eax,1)",},
{{0x0f, 0x1b, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 1b 04 05 78 56 34 12 \tbndstx %bnd0,0x12345678(,%eax,1)",},
{{0x0f, 0x1b, 0x04, 0x08, }, 4, 0, "", "",
"0f 1b 04 08          \tbndstx %bnd0,(%eax,%ecx,1)",},
{{0x0f, 0x1b, 0x40, 0x12, }, 4, 0, "", "",
"0f 1b 40 12          \tbndstx %bnd0,0x12(%eax)",},
{{0x0f, 0x1b, 0x45, 0x12, }, 4, 0, "", "",
"0f 1b 45 12          \tbndstx %bnd0,0x12(%ebp)",},
{{0x0f, 0x1b, 0x44, 0x01, 0x12, }, 5, 0, "", "",
"0f 1b 44 01 12       \tbndstx %bnd0,0x12(%ecx,%eax,1)",},
{{0x0f, 0x1b, 0x44, 0x05, 0x12, }, 5, 0, "", "",
"0f 1b 44 05 12       \tbndstx %bnd0,0x12(%ebp,%eax,1)",},
{{0x0f, 0x1b, 0x44, 0x08, 0x12, }, 5, 0, "", "",
"0f 1b 44 08 12       \tbndstx %bnd0,0x12(%eax,%ecx,1)",},
{{0x0f, 0x1b, 0x80, 0x78, 0x56, 0x34, 0x12, }, 7, 0, "", "",
"0f 1b 80 78 56 34 12 \tbndstx %bnd0,0x12345678(%eax)",},
{{0x0f, 0x1b, 0x85, 0x78, 0x56, 0x34, 0x12, }, 7, 0, "", "",
"0f 1b 85 78 56 34 12 \tbndstx %bnd0,0x12345678(%ebp)",},
{{0x0f, 0x1b, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 1b 84 01 78 56 34 12 \tbndstx %bnd0,0x12345678(%ecx,%eax,1)",},
{{0x0f, 0x1b, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 1b 84 05 78 56 34 12 \tbndstx %bnd0,0x12345678(%ebp,%eax,1)",},
{{0x0f, 0x1b, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 1b 84 08 78 56 34 12 \tbndstx %bnd0,0x12345678(%eax,%ecx,1)",},
{{0xf2, 0xe8, 0xfc, 0xff, 0xff, 0xff, }, 6, 0xfffffffc, "call", "unconditional",
"f2 e8 fc ff ff ff    \tbnd call 3c3 <main+0x3c3>",},
{{0xf2, 0xff, 0x10, }, 3, 0, "call", "indirect",
"f2 ff 10             \tbnd call *(%eax)",},
{{0xf2, 0xc3, }, 2, 0, "ret", "indirect",
"f2 c3                \tbnd ret ",},
{{0xf2, 0xe9, 0xfc, 0xff, 0xff, 0xff, }, 6, 0xfffffffc, "jmp", "unconditional",
"f2 e9 fc ff ff ff    \tbnd jmp 3ce <main+0x3ce>",},
{{0xf2, 0xe9, 0xfc, 0xff, 0xff, 0xff, }, 6, 0xfffffffc, "jmp", "unconditional",
"f2 e9 fc ff ff ff    \tbnd jmp 3d4 <main+0x3d4>",},
{{0xf2, 0xff, 0x21, }, 3, 0, "jmp", "indirect",
"f2 ff 21             \tbnd jmp *(%ecx)",},
{{0xf2, 0x0f, 0x85, 0xfc, 0xff, 0xff, 0xff, }, 7, 0xfffffffc, "jcc", "conditional",
"f2 0f 85 fc ff ff ff \tbnd jne 3de <main+0x3de>",},
{{0x0f, 0x3a, 0xcc, 0xc1, 0x00, }, 5, 0, "", "",
"0f 3a cc c1 00       \tsha1rnds4 $0x0,%xmm1,%xmm0",},
{{0x0f, 0x3a, 0xcc, 0xd7, 0x91, }, 5, 0, "", "",
"0f 3a cc d7 91       \tsha1rnds4 $0x91,%xmm7,%xmm2",},
{{0x0f, 0x3a, 0xcc, 0x00, 0x91, }, 5, 0, "", "",
"0f 3a cc 00 91       \tsha1rnds4 $0x91,(%eax),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x05, 0x78, 0x56, 0x34, 0x12, 0x91, }, 9, 0, "", "",
"0f 3a cc 05 78 56 34 12 91 \tsha1rnds4 $0x91,0x12345678,%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x18, 0x91, }, 5, 0, "", "",
"0f 3a cc 18 91       \tsha1rnds4 $0x91,(%eax),%xmm3",},
{{0x0f, 0x3a, 0xcc, 0x04, 0x01, 0x91, }, 6, 0, "", "",
"0f 3a cc 04 01 91    \tsha1rnds4 $0x91,(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, 0x91, }, 10, 0, "", "",
"0f 3a cc 04 05 78 56 34 12 91 \tsha1rnds4 $0x91,0x12345678(,%eax,1),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x04, 0x08, 0x91, }, 6, 0, "", "",
"0f 3a cc 04 08 91    \tsha1rnds4 $0x91,(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x04, 0xc8, 0x91, }, 6, 0, "", "",
"0f 3a cc 04 c8 91    \tsha1rnds4 $0x91,(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x40, 0x12, 0x91, }, 6, 0, "", "",
"0f 3a cc 40 12 91    \tsha1rnds4 $0x91,0x12(%eax),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x45, 0x12, 0x91, }, 6, 0, "", "",
"0f 3a cc 45 12 91    \tsha1rnds4 $0x91,0x12(%ebp),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x44, 0x01, 0x12, 0x91, }, 7, 0, "", "",
"0f 3a cc 44 01 12 91 \tsha1rnds4 $0x91,0x12(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x44, 0x05, 0x12, 0x91, }, 7, 0, "", "",
"0f 3a cc 44 05 12 91 \tsha1rnds4 $0x91,0x12(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x44, 0x08, 0x12, 0x91, }, 7, 0, "", "",
"0f 3a cc 44 08 12 91 \tsha1rnds4 $0x91,0x12(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x44, 0xc8, 0x12, 0x91, }, 7, 0, "", "",
"0f 3a cc 44 c8 12 91 \tsha1rnds4 $0x91,0x12(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x80, 0x78, 0x56, 0x34, 0x12, 0x91, }, 9, 0, "", "",
"0f 3a cc 80 78 56 34 12 91 \tsha1rnds4 $0x91,0x12345678(%eax),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x85, 0x78, 0x56, 0x34, 0x12, 0x91, }, 9, 0, "", "",
"0f 3a cc 85 78 56 34 12 91 \tsha1rnds4 $0x91,0x12345678(%ebp),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, 0x91, }, 10, 0, "", "",
"0f 3a cc 84 01 78 56 34 12 91 \tsha1rnds4 $0x91,0x12345678(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, 0x91, }, 10, 0, "", "",
"0f 3a cc 84 05 78 56 34 12 91 \tsha1rnds4 $0x91,0x12345678(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, 0x91, }, 10, 0, "", "",
"0f 3a cc 84 08 78 56 34 12 91 \tsha1rnds4 $0x91,0x12345678(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x3a, 0xcc, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, 0x91, }, 10, 0, "", "",
"0f 3a cc 84 c8 78 56 34 12 91 \tsha1rnds4 $0x91,0x12345678(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xc8, 0xc1, }, 4, 0, "", "",
"0f 38 c8 c1          \tsha1nexte %xmm1,%xmm0",},
{{0x0f, 0x38, 0xc8, 0xd7, }, 4, 0, "", "",
"0f 38 c8 d7          \tsha1nexte %xmm7,%xmm2",},
{{0x0f, 0x38, 0xc8, 0x00, }, 4, 0, "", "",
"0f 38 c8 00          \tsha1nexte (%eax),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 c8 05 78 56 34 12 \tsha1nexte 0x12345678,%xmm0",},
{{0x0f, 0x38, 0xc8, 0x18, }, 4, 0, "", "",
"0f 38 c8 18          \tsha1nexte (%eax),%xmm3",},
{{0x0f, 0x38, 0xc8, 0x04, 0x01, }, 5, 0, "", "",
"0f 38 c8 04 01       \tsha1nexte (%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c8 04 05 78 56 34 12 \tsha1nexte 0x12345678(,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x04, 0x08, }, 5, 0, "", "",
"0f 38 c8 04 08       \tsha1nexte (%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x04, 0xc8, }, 5, 0, "", "",
"0f 38 c8 04 c8       \tsha1nexte (%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x40, 0x12, }, 5, 0, "", "",
"0f 38 c8 40 12       \tsha1nexte 0x12(%eax),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x45, 0x12, }, 5, 0, "", "",
"0f 38 c8 45 12       \tsha1nexte 0x12(%ebp),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"0f 38 c8 44 01 12    \tsha1nexte 0x12(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"0f 38 c8 44 05 12    \tsha1nexte 0x12(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"0f 38 c8 44 08 12    \tsha1nexte 0x12(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"0f 38 c8 44 c8 12    \tsha1nexte 0x12(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 c8 80 78 56 34 12 \tsha1nexte 0x12345678(%eax),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 c8 85 78 56 34 12 \tsha1nexte 0x12345678(%ebp),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c8 84 01 78 56 34 12 \tsha1nexte 0x12345678(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c8 84 05 78 56 34 12 \tsha1nexte 0x12345678(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c8 84 08 78 56 34 12 \tsha1nexte 0x12345678(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xc8, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c8 84 c8 78 56 34 12 \tsha1nexte 0x12345678(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xc9, 0xc1, }, 4, 0, "", "",
"0f 38 c9 c1          \tsha1msg1 %xmm1,%xmm0",},
{{0x0f, 0x38, 0xc9, 0xd7, }, 4, 0, "", "",
"0f 38 c9 d7          \tsha1msg1 %xmm7,%xmm2",},
{{0x0f, 0x38, 0xc9, 0x00, }, 4, 0, "", "",
"0f 38 c9 00          \tsha1msg1 (%eax),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 c9 05 78 56 34 12 \tsha1msg1 0x12345678,%xmm0",},
{{0x0f, 0x38, 0xc9, 0x18, }, 4, 0, "", "",
"0f 38 c9 18          \tsha1msg1 (%eax),%xmm3",},
{{0x0f, 0x38, 0xc9, 0x04, 0x01, }, 5, 0, "", "",
"0f 38 c9 04 01       \tsha1msg1 (%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c9 04 05 78 56 34 12 \tsha1msg1 0x12345678(,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x04, 0x08, }, 5, 0, "", "",
"0f 38 c9 04 08       \tsha1msg1 (%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x04, 0xc8, }, 5, 0, "", "",
"0f 38 c9 04 c8       \tsha1msg1 (%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x40, 0x12, }, 5, 0, "", "",
"0f 38 c9 40 12       \tsha1msg1 0x12(%eax),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x45, 0x12, }, 5, 0, "", "",
"0f 38 c9 45 12       \tsha1msg1 0x12(%ebp),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"0f 38 c9 44 01 12    \tsha1msg1 0x12(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"0f 38 c9 44 05 12    \tsha1msg1 0x12(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"0f 38 c9 44 08 12    \tsha1msg1 0x12(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"0f 38 c9 44 c8 12    \tsha1msg1 0x12(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 c9 80 78 56 34 12 \tsha1msg1 0x12345678(%eax),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 c9 85 78 56 34 12 \tsha1msg1 0x12345678(%ebp),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c9 84 01 78 56 34 12 \tsha1msg1 0x12345678(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c9 84 05 78 56 34 12 \tsha1msg1 0x12345678(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c9 84 08 78 56 34 12 \tsha1msg1 0x12345678(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xc9, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 c9 84 c8 78 56 34 12 \tsha1msg1 0x12345678(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xca, 0xc1, }, 4, 0, "", "",
"0f 38 ca c1          \tsha1msg2 %xmm1,%xmm0",},
{{0x0f, 0x38, 0xca, 0xd7, }, 4, 0, "", "",
"0f 38 ca d7          \tsha1msg2 %xmm7,%xmm2",},
{{0x0f, 0x38, 0xca, 0x00, }, 4, 0, "", "",
"0f 38 ca 00          \tsha1msg2 (%eax),%xmm0",},
{{0x0f, 0x38, 0xca, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 ca 05 78 56 34 12 \tsha1msg2 0x12345678,%xmm0",},
{{0x0f, 0x38, 0xca, 0x18, }, 4, 0, "", "",
"0f 38 ca 18          \tsha1msg2 (%eax),%xmm3",},
{{0x0f, 0x38, 0xca, 0x04, 0x01, }, 5, 0, "", "",
"0f 38 ca 04 01       \tsha1msg2 (%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xca, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 ca 04 05 78 56 34 12 \tsha1msg2 0x12345678(,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xca, 0x04, 0x08, }, 5, 0, "", "",
"0f 38 ca 04 08       \tsha1msg2 (%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xca, 0x04, 0xc8, }, 5, 0, "", "",
"0f 38 ca 04 c8       \tsha1msg2 (%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xca, 0x40, 0x12, }, 5, 0, "", "",
"0f 38 ca 40 12       \tsha1msg2 0x12(%eax),%xmm0",},
{{0x0f, 0x38, 0xca, 0x45, 0x12, }, 5, 0, "", "",
"0f 38 ca 45 12       \tsha1msg2 0x12(%ebp),%xmm0",},
{{0x0f, 0x38, 0xca, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"0f 38 ca 44 01 12    \tsha1msg2 0x12(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xca, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"0f 38 ca 44 05 12    \tsha1msg2 0x12(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xca, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"0f 38 ca 44 08 12    \tsha1msg2 0x12(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xca, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"0f 38 ca 44 c8 12    \tsha1msg2 0x12(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xca, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 ca 80 78 56 34 12 \tsha1msg2 0x12345678(%eax),%xmm0",},
{{0x0f, 0x38, 0xca, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 ca 85 78 56 34 12 \tsha1msg2 0x12345678(%ebp),%xmm0",},
{{0x0f, 0x38, 0xca, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 ca 84 01 78 56 34 12 \tsha1msg2 0x12345678(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xca, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 ca 84 05 78 56 34 12 \tsha1msg2 0x12345678(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xca, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 ca 84 08 78 56 34 12 \tsha1msg2 0x12345678(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xca, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 ca 84 c8 78 56 34 12 \tsha1msg2 0x12345678(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xcb, 0xcc, }, 4, 0, "", "",
"0f 38 cb cc          \tsha256rnds2 %xmm0,%xmm4,%xmm1",},
{{0x0f, 0x38, 0xcb, 0xd7, }, 4, 0, "", "",
"0f 38 cb d7          \tsha256rnds2 %xmm0,%xmm7,%xmm2",},
{{0x0f, 0x38, 0xcb, 0x08, }, 4, 0, "", "",
"0f 38 cb 08          \tsha256rnds2 %xmm0,(%eax),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x0d, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 cb 0d 78 56 34 12 \tsha256rnds2 %xmm0,0x12345678,%xmm1",},
{{0x0f, 0x38, 0xcb, 0x18, }, 4, 0, "", "",
"0f 38 cb 18          \tsha256rnds2 %xmm0,(%eax),%xmm3",},
{{0x0f, 0x38, 0xcb, 0x0c, 0x01, }, 5, 0, "", "",
"0f 38 cb 0c 01       \tsha256rnds2 %xmm0,(%ecx,%eax,1),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x0c, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cb 0c 05 78 56 34 12 \tsha256rnds2 %xmm0,0x12345678(,%eax,1),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x0c, 0x08, }, 5, 0, "", "",
"0f 38 cb 0c 08       \tsha256rnds2 %xmm0,(%eax,%ecx,1),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x0c, 0xc8, }, 5, 0, "", "",
"0f 38 cb 0c c8       \tsha256rnds2 %xmm0,(%eax,%ecx,8),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x48, 0x12, }, 5, 0, "", "",
"0f 38 cb 48 12       \tsha256rnds2 %xmm0,0x12(%eax),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x4d, 0x12, }, 5, 0, "", "",
"0f 38 cb 4d 12       \tsha256rnds2 %xmm0,0x12(%ebp),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x4c, 0x01, 0x12, }, 6, 0, "", "",
"0f 38 cb 4c 01 12    \tsha256rnds2 %xmm0,0x12(%ecx,%eax,1),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x4c, 0x05, 0x12, }, 6, 0, "", "",
"0f 38 cb 4c 05 12    \tsha256rnds2 %xmm0,0x12(%ebp,%eax,1),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x4c, 0x08, 0x12, }, 6, 0, "", "",
"0f 38 cb 4c 08 12    \tsha256rnds2 %xmm0,0x12(%eax,%ecx,1),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x4c, 0xc8, 0x12, }, 6, 0, "", "",
"0f 38 cb 4c c8 12    \tsha256rnds2 %xmm0,0x12(%eax,%ecx,8),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x88, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 cb 88 78 56 34 12 \tsha256rnds2 %xmm0,0x12345678(%eax),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x8d, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 cb 8d 78 56 34 12 \tsha256rnds2 %xmm0,0x12345678(%ebp),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x8c, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cb 8c 01 78 56 34 12 \tsha256rnds2 %xmm0,0x12345678(%ecx,%eax,1),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x8c, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cb 8c 05 78 56 34 12 \tsha256rnds2 %xmm0,0x12345678(%ebp,%eax,1),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x8c, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cb 8c 08 78 56 34 12 \tsha256rnds2 %xmm0,0x12345678(%eax,%ecx,1),%xmm1",},
{{0x0f, 0x38, 0xcb, 0x8c, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cb 8c c8 78 56 34 12 \tsha256rnds2 %xmm0,0x12345678(%eax,%ecx,8),%xmm1",},
{{0x0f, 0x38, 0xcc, 0xc1, }, 4, 0, "", "",
"0f 38 cc c1          \tsha256msg1 %xmm1,%xmm0",},
{{0x0f, 0x38, 0xcc, 0xd7, }, 4, 0, "", "",
"0f 38 cc d7          \tsha256msg1 %xmm7,%xmm2",},
{{0x0f, 0x38, 0xcc, 0x00, }, 4, 0, "", "",
"0f 38 cc 00          \tsha256msg1 (%eax),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 cc 05 78 56 34 12 \tsha256msg1 0x12345678,%xmm0",},
{{0x0f, 0x38, 0xcc, 0x18, }, 4, 0, "", "",
"0f 38 cc 18          \tsha256msg1 (%eax),%xmm3",},
{{0x0f, 0x38, 0xcc, 0x04, 0x01, }, 5, 0, "", "",
"0f 38 cc 04 01       \tsha256msg1 (%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cc 04 05 78 56 34 12 \tsha256msg1 0x12345678(,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x04, 0x08, }, 5, 0, "", "",
"0f 38 cc 04 08       \tsha256msg1 (%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x04, 0xc8, }, 5, 0, "", "",
"0f 38 cc 04 c8       \tsha256msg1 (%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x40, 0x12, }, 5, 0, "", "",
"0f 38 cc 40 12       \tsha256msg1 0x12(%eax),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x45, 0x12, }, 5, 0, "", "",
"0f 38 cc 45 12       \tsha256msg1 0x12(%ebp),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"0f 38 cc 44 01 12    \tsha256msg1 0x12(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"0f 38 cc 44 05 12    \tsha256msg1 0x12(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"0f 38 cc 44 08 12    \tsha256msg1 0x12(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"0f 38 cc 44 c8 12    \tsha256msg1 0x12(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 cc 80 78 56 34 12 \tsha256msg1 0x12345678(%eax),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 cc 85 78 56 34 12 \tsha256msg1 0x12345678(%ebp),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cc 84 01 78 56 34 12 \tsha256msg1 0x12345678(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cc 84 05 78 56 34 12 \tsha256msg1 0x12345678(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cc 84 08 78 56 34 12 \tsha256msg1 0x12345678(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xcc, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cc 84 c8 78 56 34 12 \tsha256msg1 0x12345678(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xcd, 0xc1, }, 4, 0, "", "",
"0f 38 cd c1          \tsha256msg2 %xmm1,%xmm0",},
{{0x0f, 0x38, 0xcd, 0xd7, }, 4, 0, "", "",
"0f 38 cd d7          \tsha256msg2 %xmm7,%xmm2",},
{{0x0f, 0x38, 0xcd, 0x00, }, 4, 0, "", "",
"0f 38 cd 00          \tsha256msg2 (%eax),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x05, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 cd 05 78 56 34 12 \tsha256msg2 0x12345678,%xmm0",},
{{0x0f, 0x38, 0xcd, 0x18, }, 4, 0, "", "",
"0f 38 cd 18          \tsha256msg2 (%eax),%xmm3",},
{{0x0f, 0x38, 0xcd, 0x04, 0x01, }, 5, 0, "", "",
"0f 38 cd 04 01       \tsha256msg2 (%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x04, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cd 04 05 78 56 34 12 \tsha256msg2 0x12345678(,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x04, 0x08, }, 5, 0, "", "",
"0f 38 cd 04 08       \tsha256msg2 (%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x04, 0xc8, }, 5, 0, "", "",
"0f 38 cd 04 c8       \tsha256msg2 (%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x40, 0x12, }, 5, 0, "", "",
"0f 38 cd 40 12       \tsha256msg2 0x12(%eax),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x45, 0x12, }, 5, 0, "", "",
"0f 38 cd 45 12       \tsha256msg2 0x12(%ebp),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x44, 0x01, 0x12, }, 6, 0, "", "",
"0f 38 cd 44 01 12    \tsha256msg2 0x12(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x44, 0x05, 0x12, }, 6, 0, "", "",
"0f 38 cd 44 05 12    \tsha256msg2 0x12(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x44, 0x08, 0x12, }, 6, 0, "", "",
"0f 38 cd 44 08 12    \tsha256msg2 0x12(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x44, 0xc8, 0x12, }, 6, 0, "", "",
"0f 38 cd 44 c8 12    \tsha256msg2 0x12(%eax,%ecx,8),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x80, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 cd 80 78 56 34 12 \tsha256msg2 0x12345678(%eax),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x85, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f 38 cd 85 78 56 34 12 \tsha256msg2 0x12345678(%ebp),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x84, 0x01, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cd 84 01 78 56 34 12 \tsha256msg2 0x12345678(%ecx,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x84, 0x05, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cd 84 05 78 56 34 12 \tsha256msg2 0x12345678(%ebp,%eax,1),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x84, 0x08, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cd 84 08 78 56 34 12 \tsha256msg2 0x12345678(%eax,%ecx,1),%xmm0",},
{{0x0f, 0x38, 0xcd, 0x84, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"0f 38 cd 84 c8 78 56 34 12 \tsha256msg2 0x12345678(%eax,%ecx,8),%xmm0",},
{{0x66, 0x0f, 0xae, 0x38, }, 4, 0, "", "",
"66 0f ae 38          \tclflushopt (%eax)",},
{{0x66, 0x0f, 0xae, 0x3d, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"66 0f ae 3d 78 56 34 12 \tclflushopt 0x12345678",},
{{0x66, 0x0f, 0xae, 0xbc, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f ae bc c8 78 56 34 12 \tclflushopt 0x12345678(%eax,%ecx,8)",},
{{0x0f, 0xae, 0x38, }, 3, 0, "", "",
"0f ae 38             \tclflush (%eax)",},
{{0x0f, 0xae, 0xf8, }, 3, 0, "", "",
"0f ae f8             \tsfence ",},
{{0x66, 0x0f, 0xae, 0x30, }, 4, 0, "", "",
"66 0f ae 30          \tclwb   (%eax)",},
{{0x66, 0x0f, 0xae, 0x35, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"66 0f ae 35 78 56 34 12 \tclwb   0x12345678",},
{{0x66, 0x0f, 0xae, 0xb4, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 9, 0, "", "",
"66 0f ae b4 c8 78 56 34 12 \tclwb   0x12345678(%eax,%ecx,8)",},
{{0x0f, 0xae, 0x30, }, 3, 0, "", "",
"0f ae 30             \txsaveopt (%eax)",},
{{0x0f, 0xae, 0xf0, }, 3, 0, "", "",
"0f ae f0             \tmfence ",},
{{0x0f, 0xc7, 0x20, }, 3, 0, "", "",
"0f c7 20             \txsavec (%eax)",},
{{0x0f, 0xc7, 0x25, 0x78, 0x56, 0x34, 0x12, }, 7, 0, "", "",
"0f c7 25 78 56 34 12 \txsavec 0x12345678",},
{{0x0f, 0xc7, 0xa4, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f c7 a4 c8 78 56 34 12 \txsavec 0x12345678(%eax,%ecx,8)",},
{{0x0f, 0xc7, 0x28, }, 3, 0, "", "",
"0f c7 28             \txsaves (%eax)",},
{{0x0f, 0xc7, 0x2d, 0x78, 0x56, 0x34, 0x12, }, 7, 0, "", "",
"0f c7 2d 78 56 34 12 \txsaves 0x12345678",},
{{0x0f, 0xc7, 0xac, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f c7 ac c8 78 56 34 12 \txsaves 0x12345678(%eax,%ecx,8)",},
{{0x0f, 0xc7, 0x18, }, 3, 0, "", "",
"0f c7 18             \txrstors (%eax)",},
{{0x0f, 0xc7, 0x1d, 0x78, 0x56, 0x34, 0x12, }, 7, 0, "", "",
"0f c7 1d 78 56 34 12 \txrstors 0x12345678",},
{{0x0f, 0xc7, 0x9c, 0xc8, 0x78, 0x56, 0x34, 0x12, }, 8, 0, "", "",
"0f c7 9c c8 78 56 34 12 \txrstors 0x12345678(%eax,%ecx,8)",},
