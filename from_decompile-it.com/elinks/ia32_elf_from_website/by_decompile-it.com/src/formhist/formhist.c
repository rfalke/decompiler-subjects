#include "formhist.c.h"
static struct option_info forms_history_options[2] = { { { 0, 0, { 0 }
, "show_formhist", 0, 0, 0, 1, { 0, 135388836, 135455287, 0, 0, 0 }
, "Ask if a login form should be saved to file or not. This option only disables the dialog, already saved login forms are unaffected.", "Show form history dialog", 0, 0, 0 }
, "document.browse.forms" }
, { { 0, 0, { 0 }
, 0, 0, 0, 0, 0, { 0, 0, 0, 0, 0, 0 }
, 0, 0, 0, 0, 0 }
, 0 }
 };
struct list_head_elinks saved_forms = { &saved_forms, &saved_forms };
static int loaded;
struct module forms_history_module = { "Form History", forms_history_options, 0, 0, 0, 0, &done_form_history };
struct formhist_data *new_formhist_item( unsigned char *url )
{
  struct formhist_data *form;
  if ( mem_calloc( 1, strlen( &url[0] ) + 24 ) )
  {
    memcpy( mem_calloc( 1, strlen( &url[0] ) + 24 ) + 21, &url[0], strlen( &url[0] ) );
    form->submit = (struct list_head_elinks*)mem_alloc( 8 );
    if ( form->submit )
    {
      form->submit->prev = (void*)form->submit;
      form->submit = form->submit;
      form->box_item = add_listbox_item( &formhist_browser, 0, BI_LEAF, (void*)form[0].next, 1 );
      if ( form->box_item == 0 )
        mem_free( (void*)form->submit );
      else
      {
        return &form[0];
      }
    }
    &form[0] = 0;
    mem_free( (void*)form[0].next );
    return &form[0];
  }
  else
  {
    return &form[0];
  }
}
void done_formhist_item( struct formhist_data *form )
{
  done_listbox_item( &formhist_browser, form->box_item );
  done_submitted_value_list( form->submit );
  mem_free( (void*)form->submit );
  mem_free( (void*)form[0].next );
  return;
}
void delete_formhist_item( struct formhist_data *form )
{
  form->prev = form->prev;
  &form->prev[0] = &form[0];
}
int load_formhist_from_file( void )
{
  int eax;
  int edx;
  struct formhist_data *form;
  unsigned char tmp[1024];
  unsigned char *file;
  FILE *f;
  if ( (loaded & 0xFFFFFFFF) == 0 )
  {
    if ( elinks_home && straconcat( elinks_home ) )
    {
      f = fopen64( (char*)straconcat( elinks_home ), "rb" );
      mem_free( &file[0] );
      if ( f )
      {
        while ( fgets( tmp, 1024, f ) == 0 )
        {
          unsigned char *p;
          int dontsave;
          if ( tmp[0] != 10 || tmp[1] )
          {
            if ( strchr( tmp, 9 ) )
            {
              *(char*)(strchr( tmp, 9 )) = 0;
              p[0] = strchr( tmp, 9 ) + 1;
              strcmp( "dontsave", tmp );
              p[0] = p[0];
              dontsave = ( 0 - ( ( ( (unsigned char)( ccdep2 < ccdep1 ) - 0 ) < 1 ) & 1 ) ) & 1;
            }
            else
            {
              strcmp( "dontsave,", tmp );
              if ( !1 )
              {
              }
              else
              {
              }
            }
            *(char*)(p[ strlen( &p[0] ) ] - 1) = 0;
            if ( new_formhist_item( &p[0] ) )
            {
              if ( dontsave )
              {
                *(char*)(new_formhist_item( &p[0] ) + 20) |= 1;
                dontsave = dontsave;
              }
              while ( fgets( tmp, 1024, f ) == 0 || ( tmp[0] == 10 && tmp[1] == 0 ) )
              {
                if ( strchr( tmp, 9 ) )
                {
                  p[0] = strchr( tmp, 9 ) + 1;
                  *(char*)(strchr( tmp, 9 )) = 0;
                  if ( strchr( strchr( tmp, 9 ) + 1, 9 ) == 0 )
                  {
                    if ( tmp[0] == '*' )
                    {
                    }
                    else
                    {
                    }
                  }
                  else
                  {
                    *(char*)(strchr( strchr( tmp, 9 ) + 1, 9 )) = 0;
                    name = &p[0];
                    type[0] = tmp[0];
                    value = strchr( strchr( tmp, 9 ) + 1, 9 ) + 1;
                  }
                  if ( strchr( strchr( tmp, 9 ) + 1, 10 ) )
                  {
                    *(char*)(strchr( strchr( tmp, 9 ) + 1, 10 )) = 0;
                    if ( str2form_type( &type[0] ) != -1 )
                    {
                      if ( ( ( *(char*)(form[0].next + 20) & 1 ) & 255 ) == 0 )
                      {
                        if ( enc_value[0] )
                        {
                          sv = init_submitted_value( name, &enc_value[0], ret, 0, 0 );
                          mem_free( &enc_value[0] );
                          if ( sv[0].next == 0 )
                            goto B39;
                          else
                          {
                            sv = &form->submit->next[0];
                            sv->prev = &form->submit->next[0];
                            form->submit->next = (void*)sv[0].next;
                            sv->prev = &sv[0];
                          }
                        }
                      }
                    }
                  }
                }
B39:                done_formhist_item( &form[0] );
              }
              form->prev = &saved_forms.next[0];
              form = &saved_forms.next[0];
              saved_forms.next = (void*)form[0].next;
              form->prev = &form[0];
            }
          }
        }
        fclose( f );
      }
    }
  }
  if ( 0 ^ 0 )
  {
    __stack_chk_fail(  );
  }
  return eax;
(loaded & 0xFFFFFFFF) = 1; // XXX
}
int save_formhist_to_file( void )
{
  struct secure_save_info *ssi;
  unsigned char *file;
  struct formhist_data *form;
  int r;
  if ( elinks_home && *(int*)(get_opt_( cmdline_options, (unsigned char*)cmdline_options )) == 0 && straconcat( elinks_home ) )
  {
    ssi = secure_open( straconcat( elinks_home ) );
    mem_free( &file[0] );
    if ( ssi )
    {
      form = &saved_forms.next[0];
      if ( saved_forms.next != saved_forms.next )
      {
      {
        do
        {
          struct submitted_value *sv;
          if ( ( *(char*)(form[0].next + 20) & 1 ) & 255 )
            secure_fprintf( ssi, "dontsave\t%s\n\n" );
          else
          {
            secure_fprintf( ssi, "%s\n" );
            if ( form->submit->next != form->submit )
            {
              do
              {
                if ( encvalue[0] )
                {
                  secure_fprintf( ssi, "%s\t%s\t%s\n" );
                  mem_free( &encvalue[0] );
                }
              }
              while ( ebx != *(int*)(ebp_28 + 12) );
            }
            secure_fputc( ssi, 10 );
          }
        }
        while ( form->next != saved_forms.next );
      }
      }
      if ( r == 0 )
      {
      }
      return secure_close( ssi );
    }
  }
  (loaded & 0xFFFFFFFF) = 1;
  r = 0;
  return secure_close( ssi );
}
void remember_form( void *form_ )
{
  int eax;
  struct formhist_data *form = &form_[0];
  if ( saved_forms.next != saved_forms.next )
  {
    while ( 1 )
    {
      if ( strcmp( saved_forms.next + 21, &((int*)form_)[5] ) )
      {
        ebx = eax;
        if ( saved_forms.next == saved_forms.next )
          goto B3;
      }
      else
      {
        delete_formhist_item( &saved_forms.next[0] );
        ebx = ebx;
        if ( edi == ebx )
          goto B3;
      }
    }
  }
B3:  form->prev = &saved_forms.next[0];
  &form[0] = &saved_forms.next[0];
  saved_forms.next = (void*)form;
  form->prev = form;
}
void dont_remember_form( void *form_ )
{
  int eax;
}
void never_for_this_site( void *form_ )
{
  ((int*)form_)[5] |= 1;
  form_ = form_;
}
unsigned char *get_form_history_value( unsigned char *url, unsigned char *name )
{
  int eax;
  struct formhist_data *form;
  if ( url && name[0] && url[0] && name[0] && load_formhist_from_file(  ) )
  {
    form = &saved_forms.next[0];
    while ( saved_forms.next != form )
    {
      if ( !( ( form->bits_at_20/*.1_1of4*/ & 1 ) & 255 ) && !strcmp( form + 21, &url[0] ) && form->submit[0].next != form->submit )
      {
        do
        {
          if ( strcmp( (char*)sv->name, &name[0] ) == 0 )
          {
            return sv->value;
          }
          sv = &sv;
        }
        while ( form->submit != sv->next );
      }
      form = &form[0];
    }
  }
}
void memorize_form( struct session *ses, struct list_head_elinks *submit, struct form *forminfo )
{
  int eax;
  int ecx;
  int ebp_48;
  int ebp_36;
  struct formhist_data *form;
  struct submitted_value *sv = &submit[0].next[0];
  if ( submit[0].next != submit )
  {
    do
    {
      if ( sv->type == FC_PASSWORD && sv->value && sv->value[0] )
      {
        if ( new_formhist_item( forminfo->action ) )
        {
          sv = &submit->next[0];
          if ( submit->next != submit[0].next )
          {
            form = new_formhist_item( forminfo->action );
            do
            {
              if ( sv->type <= 1 )
              {
                struct submitted_value *sv2;
                if ( sv2[0].next )
                {
                  sv2 = &form->submit[0].next[0];
                  sv2->prev = &form->submit->next[0];
                  form->submit->next = (void*)sv2[0].next;
                  *(int*)(*(int*)(init_submitted_value( sv->name, sv->value, sv->type, 0, 0 )) + 4) = sv2[0];
                  sv = &sv;
                  if ( sv->next == submit[0].next )
                    break;
                }
                else
                {
                }
              }
              else
              {
                sv = &sv;
              }
            }
            while ( sv->next != submit[0].next );
          }
          if ( load_formhist_from_file(  ) && saved_forms.next != saved_forms.next )
          {
            do
            {
              if ( eax == 0 )
              {
                if ( ( ( *(char*)(saved_forms.next + 20) & 1 ) & 255 ) == 0 )
                {
                  if ( *(int*)(*(int*)(new_formhist_item( forminfo->action ) + 12)) != *(int*)(new_formhist_item( forminfo->action ) + 12) )
                  {
                    ebp_48 = 0;
                    ebp_36 = 0;
                    do
                    {
                      if ( saved_forms.list_head_elinks != saved_forms.list_head_elinks )
                      {
                        do
                        {
                          if ( esi == *(int*)(ebx + 20) && eax == 0 )
                          {
                            ebp_48++;
                            if ( *(int*)(ebx + 12) == 0 || eax == 0 )
                              break;
                          }
                          else
                        }
                        while ( edi != ebx );
                      }
                      ebp_36++;
                    }
                    while ( ebp_40 != *ebp_28 );
                    if ( ebp_48 && ebp_36 && ebp_48 == ebp_36 )
                      continue;
                  }
                }
              }
            }
            while ( saved_forms.next != saved_forms.next );
          }
          msg_box( ses->tab->term, 0, 0, "Form history", ALIGN_CENTER, "Should this login be remembered?\n\nPlease note that the password will be stored obscured (but unencrypted) in a file on your disk.\n\nIf you are using a valuable password, answer NO.", (void*)new_formhist_item( forminfo->action ), 3 );
          submit = &submit[0];
          break;
        }
      }
      else
      {
        sv = &sv;
      }
    }
    while ( sv->next != submit[0].next );
  }
  return;
}
void done_form_history( struct module *module )
{
  int edx;
  struct formhist_data *form = &saved_forms.next[0], *next = &saved_forms.next[0];
  if ( saved_forms.next != saved_forms.next )
  {
    while ( 1 )
    {
      delete_formhist_item( &form[0] );
      next = &form;
      form = &next;
      if ( saved_forms->next == next[0].next )
        break;
      next = &next[0];
    }
  }
  return;
}
#if 0
#endif
