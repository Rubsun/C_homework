#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[15];
    int len, i, classes_count = 0;
    int has_upper = 0, has_lower = 0, has_digit = 0, has_other = 0;

    scanf("%s", password);

    len = strlen(password);

    if (len < 8 || len > 14) {
        return 0;
    }

    for (i = 0; i < len; i++) {
        if (password[i] < 33 || password[i] > 126) {
            return 0;
        }

        if (isupper(password[i])) {
            has_upper = 1;
        } else if (islower(password[i])) {
            has_lower = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else {
            has_other = 1;
        }
    }

    classes_count = has_upper + has_lower + has_digit + has_other;

    if (classes_count < 3) {
        printf("NO\n");
        return 0;
    }

    printf("YES\n");
    return 0;
}
