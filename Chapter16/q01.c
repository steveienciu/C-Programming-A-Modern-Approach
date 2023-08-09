/* program that asks user to enter international dialing code then displays name of the corresponding country */

#include <stdio.h>
#include <stdbool.h>

#define COUNT ((int) (sizeof(country_codes) / sizeof(country_codes[0])))

struct dialing_code {
    char *country;
    int code;
};

const struct dialing_code country_codes[] = 
{{ "Argentina", 54 }, { "Bangladesh", 880 }, { "Brazil", 55 }, 
 { "Burma", 95 }, { "China", 86 }, { "colombia", 57 }, 
 { "Congo", 243 }, { "Egypt", 20 }, { "Ethiopia", 251 }};

int main(void)
{
    int code;

    printf("\nPlease enter a dialing code to display the corresponding country: ");
    scanf("%d", &code);

    for (int i = 0; i < COUNT; ++i) {
        if (code == country_codes[i].code) {
            printf("The corresponding country is %s\n", country_codes[i].country);
            return 0;
        }
    }

    printf("Invalid country code\n");

    return 0;
}
