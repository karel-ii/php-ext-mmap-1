#ifndef PHP_MMAP
#define PHP_MMAP_H 1
#define PHP_MMAP_VERSION "1.0"
#define PHP_MMAP_EXTNAME "mmap"

PHP_FUNCTION(mmap_open);

extern zend_module_entry mmap_module_entry;
#define phpext_mmap_ptr &mmap_module_entry

size_t mmap_write(php_stream * stream, char *buf, size_t count TSRMLS_DC);
int mmap_close(php_stream *stream, int close_handle TSRMLS_DC);

struct mmap_stream_data { 
	void *base_pos;

#endif