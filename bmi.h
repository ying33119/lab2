using namespace std;
class Bmi {
public:
    void setHeight(int height);
    void setMass(int mass);
    double getBmi();
    string getCategory(double bmi);
private:
    int h_value;
    int m_value;
};
