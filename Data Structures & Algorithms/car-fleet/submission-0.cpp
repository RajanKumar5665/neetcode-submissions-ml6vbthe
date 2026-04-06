class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        
        int n = position.size();

        vector<pair<int, double>> cars;

        for(int i=0; i<n; i++){
            double time = (double)(target - position[i])/speed[i];
            cars.push_back({position[i], time});
        }

        sort(cars.begin(), cars.end(), greater<pair<int, double>>());

        int fleets = 0;
        double prevTime = 0;

        //traverse

        for(int i=0; i<n; i++){
            double currTime = cars[i].second;

            if(currTime > prevTime){
                fleets++;
                prevTime = currTime;
            }
        }

        return fleets;
    }
};
