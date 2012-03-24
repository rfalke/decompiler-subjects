#include "md5.c.h"
void init_md5( struct md5_context *ctx )
{
  ctx[0].buf[0] = 0x67452301;
  ctx->buf[1] = -271733879;
  ctx->buf[2] = -1732584194;
  ctx->buf[3] = 0x10325476;
  ctx->bits[0] = 0;
  ctx->bits[1] = 0;
  return;
}
void update_md5( struct md5_context *ctx, unsigned char *buf, unsigned long len )
{
  int eax;
  int edx;
  uint32_t t = ctx->bits[0];
  ctx->bits[0] += len << 3;
  if ( ctx->bits[0] <= ctx->bits[0] + ( len << 3 ) )
    *(int*)(*(int*)(ecx + 20)) = ctx->bits[1];
  else
    ctx->bits[1]++;
  t = ( t >> 3 ) & 63;
  ctx->bits[1] = ctx->bits[1] + 1 + ( len >> 29 );
  if ( ( t >> 3 ) & 63 )
  {
    unsigned char *p;
    t = 64 - ( ( t >> 3 ) & 63 );
    p[0] = ctx + ( ( t >> 3 ) & 63 ) + 24;
    if ( 64 - ( ( t >> 3 ) & 63 ) <= len )
    {
      memmove( &p[0], buf, t );
      do
      {
        ctx->in[0] = ( ctx->in[1] << 8 ) | *(char*)(ctx + 24 + 0) | ( ( ( *(char*)(ctx + 24 + 0 + 3) << 8 ) | *(char*)(ctx + 24 + 0 + 2) ) << 16 );
      }
      while ( 0 + 4 + 4 != 64 );
      transform_md5( (uint32_t*)ctx, ctx + 24 );
    }
    else
    {
      ctx = &p[0];
      len = len;
      buf = buf;
    }
  }
  if ( len - t > 63 )
  {
    do
    {
      memmove( ctx + 24, buf + t + 0, 64 );
      do
      {
        ctx->in[0] = ( ctx->in[1] << 8 ) | *(char*)(ctx + 24 + 0) | ( ( ( *(char*)(ctx + 24 + 0 + 3) << 8 ) | *(char*)(ctx + 24 + 0 + 2) ) << 16 );
      }
      while ( 0 + 4 + 4 != 64 );
      transform_md5( (uint32_t*)ctx, ctx + 24 );
    }
    while ( len - t - ( 0 + 64 ) <= 63 );
  }
  *ebp_28 = ( len - t - 64 ) & 63;
  ctx += 0;
  len = ( len - t - 64 ) & 63;
  buf = buf + t + ( ( len - t - 64 ) & -64 ) + 64;
}
void done_md5( struct md5_context *ctx, unsigned char *digest )
{
  int eax;
  int ecx;
  int edx;
  unsigned int count = 63 - ( ( ctx->bits[0] >> 3 ) & 63 );
  unsigned char *p;
  ctx->in[ ( ctx->bits[0] >> 3 ) & 63 ] = 128;
  p[0] = ctx->in[ ( ( ctx->bits[0] >> 3 ) & 63 ) + 1 ];
  if ( 63 - ( ( ctx->bits[0] >> 3 ) & 63 ) > 7 )
    memset( &p[0], 0, count - 8 );
  else
  {
    memset( &p[0], 0, count );
    do
    {
      ctx->in[0] = ( ctx->in[0] << 8 ) | ctx->in[0] | ( ( ( *(char*)(ctx->in[0] + 0 + 3) << 8 ) | *(char*)(ctx->in[0] + 0 + 2) ) << 16 );
    }
    while ( 0 + 4 + 4 != 64 );
    transform_md5( ctx[0].buf, &ctx->in[0] );
    if ( ( ctx->in[0] & 1 ) & 255 )
      ctx->in[0] = 0;
    if ( ctx->in[1] & 2 )
    {
      ctx->in[0] = 0;
      edx -= 2;
    }
    memset( *(int*)(0), 0, ( edx >> 2 ) * 4 );
    if ( !1 )
    {
      ctx->in[0] = 0;
      if ( edx & 1 )
        goto B18;
    }
    else
    if ( ( edx & 1 ) == 0 )
      ctx = &ctx[0];
B18:    ctx->in[2] = 0;
  }
  ctx = &ctx[0];
  do
  {
    ctx->in[0] = ( ctx->in[0] << 8 ) | ctx->in[0] | ( ( ( *(char*)(ctx->in[0] + 0 + 3) << 8 ) | *(char*)(ctx->in[0] + 0 + 2) ) << 16 );
  }
  while ( 0 + 4 + 4 != 56 );
  ctx->in[56] = ctx->bits[0];
  ctx->in[60] = ctx->bits[1];
  transform_md5( ctx[0].buf, &ctx->in[0] );
  ctx->buf[0] = ctx[0].buf[0];
  do
  {
    ctx->buf[0] |= ( ctx->buf[0]/*.2_2of4*/ << 8 ) | (int)ctx->buf[0]/*.1_1of4*/;
  }
  while ( ctx->bits[0] != ctx->buf[1] + 4 );
  memmove( digest, ctx[0].buf, 16 );
  memset( *(int*)(0), 0, 88 );
  return;
}
unsigned char *digest_md5( unsigned char *data, unsigned long length, unsigned char *digest )
{
  int eax;
  int edx;
  struct md5_context ctx;
  ctx.buf[0] = 0x67452301;
  ctx.buf[1] = -271733879;
  ctx.buf[2] = -1732584194;
  ctx.buf[3] = 0x10325476;
  ctx.bits[0] = 0;
  ctx.bits[1] = 0;
  if ( length )
    update_md5( &ctx, &data[0], length );
  done_md5( &ctx, &digest[0] );
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return &digest[0];
}
void transform_md5( uint32_t *buf, uint32_t *in )
{
  int edx;
  uint32_t a;
  uint32_t b;
  uint32_t c;
  uint32_t d = ( "Huge expression, analysis aborted...", 0 );
  c = ( "Huge expression, analysis aborted...", 0 );
  b = ( "Huge expression, analysis aborted...", 0 );
  a = ( "Huge expression, analysis aborted...", 0 );
  d = ( "Huge expression, analysis aborted...", 0 );
  c = ( "Huge expression, analysis aborted...", 0 );
  b = ( "Huge expression, analysis aborted...", 0 );
  a = ( "Huge expression, analysis aborted...", 0 );
  d = ( "Huge expression, analysis aborted...", 0 );
  c = ( "Huge expression, analysis aborted...", 0 );
  c += d;
  buf[0] += a;
  buf[2] += d + c;
  buf[3] += d;
  buf[1] = d + c + *(int*)(buf[0] + 4) + ( ( ( ebx + ( d ^ ( ~eax | ( d + c ) ) ) ) >> 11 ) | ( ( ebx + ( d ^ ( ~eax | ( d + c ) ) ) ) << 21 ) );
  return;
}
#if 0
#endif
