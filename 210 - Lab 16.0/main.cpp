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
    
    // NEW Partial Constructor
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
    Color num2(255, 0, 0); // For red
    Color num3(0, 255, 0); // For green
    Color num4(0, 0, 255); // For blue
    
    // Next, we have to populate num1, while using the setters from the above part
    num1.setRed(128);
    num1.setGreen(128);
    num1.setBlue(128);
    
    // Lastly we must present the objects of Color with the print statement in line 42
    cout << "***** Objects for Color *****" << endl;
    num1.print();
    num2.print();
    num3.print();
    num4.print();
    
    return 0;
}
