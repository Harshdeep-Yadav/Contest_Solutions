class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>uttar(2,0);
        uttar[0]=celsius+273.15;
        uttar[1]=celsius*1.80+32.00;
        return uttar;
    }
};