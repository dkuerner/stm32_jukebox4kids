#include "version.h"

#define VERSION_BUILD_ID "20131116-202513"
#define PRODUCT_NAME "jukebox4kidsV2"


char* version_get_build_id() {
	return VERSION_BUILD_ID;
}

char* version_get_product_name() {
	return PRODUCT_NAME;
}