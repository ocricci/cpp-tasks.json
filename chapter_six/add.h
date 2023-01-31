namespace add {
    static int g_x_add{0};
    const int g_y_add{1};
    constexpr int g_z_add{2};
    
    int add (int x, int y);

    namespace addx {    
        int addx(int x, int y);
    }
}