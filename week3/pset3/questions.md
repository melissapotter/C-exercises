# Questions

## What's `stdint.h`?

BMP-related data types based on Microsoft's own

## What's the point of using `uint8_t`, `uint32_t`, `int32_t`, and `uint16_t` in a program?

typedef uint8_t  BYTE;
typedef uint32_t DWORD;
typedef int32_t  LONG;
typedef uint16_t WORD;

## How many bytes is a `BYTE`, a `DWORD`, a `LONG`, and a `WORD`, respectively?

BYTE - 8
DWORD - 32
LONG - 32
WORD -16

## What (in ASCII, decimal, or hexadecimal) must the first two bytes of any BMP file be? Leading bytes used to identify file formats (with high probability) are generally called "magic numbers."

BM

## What's the difference between `bfSize` and `biSize`?
bfSize is the size, in bytes, of the bitmap file.
biSize is the number of bytes required by the structure.

## What does it mean if `biHeight` is negative?

If biHeight is negative, the bitmap is a top-down DIB and its origin is the upper-left corner.

## What field in `BITMAPINFOHEADER` specifies the BMP's color depth (i.e., bits per pixel)?

biBitCount

## Why might `fopen` return `NULL` in `copy.c`?

If there is no input file.

## Why is the third argument to `fread` always `1` in our code?

Because there's only 1 data element.

## What value does `copy.c` assign to `padding` if `bi.biWidth` is `3`?

TODO

## What does `fseek` do?

fseek is used to move file pointer position to the given location.

## What is `SEEK_CUR`?

Moves file pointer to given location.
