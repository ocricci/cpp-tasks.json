static const int g_x_addx{10};

extern const int g_x_add;
extern int multiplier;

int add(int x, int y) {
    return (x + y + g_x_add + g_x_addx) * multiplier;
}