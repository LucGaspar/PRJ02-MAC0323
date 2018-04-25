#include <stdlib.h>
#include "buffer.h"
/*
  Create and return a new buffer that holds member elements of size
  member_size.
*/
Buffer *buffer_create(size_t member_size){
  if (member_size < 0)
    return ArgumentoInvalido;

  Buffer * buffer;
  Buffer = (Buffer*) malloc(sizeof(Buffer));
  buffer->member_size = member_size;
  buffer->p = 0;
  buffer->buffer_size = 0;
  void * data;
  data = malloc(sizeof(member_size));
  buffer->data = data;

  return buffer;
}

/*
  Destroy a buffer.
*/
void buffer_destroy(Buffer *B){
  if (B == NULL)
    return ArgumentoInvalido;

  free(B->data);
  free(B);
}

/*
  Reset buffer, eliminating contents.
*/
void buffer_reset(Buffer *B){
  if (B == NULL)
    return ArgumentoInvalido;
  free(B->data);

  void * data;
  data = malloc(sizeof(member_size));
  buffer->data = data;
  buffer->buffer_size = 0;
  buffer->p = 0;
}

/*
  Return a valid pointer to the first free position of the
  buffer. This means that, if the space allocated is not enough, then
  the buffer size is increased and the contents are copied.
*/
void * buffer_push_back(Buffer *B){
  if (B == NULL)
    return ArgumentoInvalido;

  B->data = realloc(B->data, p * sizeof(B->member_size));
  return (B->data + B->p++);
}

/*
  Read a line (i.e., reads up to a newline '\n' character or the
  end-of-file) from the input file and places it into the given
  buffer, including the newline character if it is present. The buffer
  is resetted before the line is read.
  Returns the number of characters read; in particular, returns ZERO
  if end-of-file is reached before any characters are read.
*/
int read_line(FILE *input, Buffer *B){
  return 0;
}

// Some handy abbreviations.
#define buffer_push_char(B, c)  (*((char *) buffer_push_back(B)) = c)

#endif
