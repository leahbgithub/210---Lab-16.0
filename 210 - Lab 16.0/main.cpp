// 210 - Lab 16 - Leah Balakrishnan
#include <iostream>

using namespace std;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    // NEW Default Constructor
    Color() : red(0), green(0), blue(0) {
        cout << "Called Default Constructor" << endl;
    }
    
    // NEW Parameter Constructor
    Color(int r, int g, int b) : red(r), green(g), blue(b) {
        cout << "Called Parameter Constructor" << endl;
    }
    
    // NEW Partial Constructor with only red while green/blue are 0
    Color(int r) : red(r), green(0), blue(0) {
        cout << "Called Partial Constructor" << endl;
    }
    
    // Setters
    void setRed(int r) {
        red = (r >= 0 && r <= 255) ? r : 0;
    }
    
    void setGreen(int g) {
        green = (g >= 0 && g <= 255) ? g : 0;
    }
    
    void setBlue(int b) {
        blue = (b >= 0 && b <= 255) ? b : 0;
    }
    
    // Getters
    int getRed() const {
        return red;
    }
    
    int getGreen() const {
        return green;
    }
    
    int getBlue() const {
        return blue;
    }
    
    // Print statement which handles outputting the RGB conversions of colors
    void print() const {
        cout << "RGB values of Color - " << red << ", " << green << ", " << blue << endl;
    }
};

int main() {
    // This is where we create multiple objects using multiple constructor types
    Color color1; // Default Constructor
    Color color2(255, 0, 0); // RED Parameter Constructor
    Color color3(0, 255, 0); // Green Parameter Constructor
    Color color4(0, 0, 255); // Blue Parameter Constructor
    Color color5(128); // Partial Constructor where red is 128 and green/blue are 0
    
    // Color1 is populated while using the setters from above
    color1.setRed(64);
    color1.setGreen(64);
    color1.setBlue(64);
    
    // Lastly we must display the objects of Color
    cout << "***** Objects for Color *****" << endl;
    color1.print();
    color2.print();
    color3.print();
    color4.print();
    color5.print();
    
    return 0;
}
