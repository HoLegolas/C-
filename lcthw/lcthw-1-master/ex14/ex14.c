/*-*- coding: utf-8 -*-

 Copyright (c) 2015 Zed A. Shaw <zedshaw@zedshaw.com>

 Permission to use, copy, modify, and distribute this software for any
 purpose with or without fee is hereby granted, provided that the above
 copyright notice and this permission notice appear in all copies.

 THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/

/*
Exercise 14
*/

#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

void print_arguments(int argc, char *argv[])
{
  int i = 0;

  for(i = 0; i < argc; i++) {
    print_letters(argv[i]);
  }
}

void print_letters(char arg[])
{
  int i = 0;

  for(i = 0; arg[i] != '\0'; i++) {
    char ch = arg[i];

    if(can_print_it(ch)) {
      printf("'%c' == %d ", ch, ch);
    }
  }
  printf("\n");
}

int can_print_it(char ch)
{
  return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
  print_arguments(argc, argv);
  return 0;
}
