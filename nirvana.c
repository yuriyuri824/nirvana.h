#define NIRVANA_IMPL
#define NIRVANA_ENABLE_LOG
#include "nirvana.h"

int main(void) {
    nir_cmd_goes_samsara(NULL);
    nir_show_todos();
    nir_cmd_t cmd = {0};
    if (!nir_cmd_init(&cmd)) {
        fprintf(stderr, "Couldn't initialize CMD\n");
        return 1;
    }
    nir_cmd_append(&cmd, "gcc");
    nir_cmd_append(&cmd, "-o");
    nir_cmd_append(&cmd, "test");
    nir_cmd_append(&cmd, "test.c");
    nir_cmd_append(&cmd, "-Wall -Werror -Wextra -pedantic");
    
    nir_cmd_run(&cmd);
    nir_cmd_cleanup(&cmd);
    return 0;
}