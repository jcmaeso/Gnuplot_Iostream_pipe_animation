// Demo of vector plot.
// Compile it with:
//   g++ -o example-vector example-vector.cc -lboost_iostreams -lboost_system -lboost_filesystem

#include <vector>
#include <cmath>
#include <boost/tuple/tuple.hpp>
#include "time.h"

#include "gnuplot-iostream.h"

int main() {
    Gnuplot gp;

    std::cout << "Press Ctrl-C to quit (closing gnuplot window doesn't quit)." << std::endl;

    const int N = 1000;
    std::vector<double> pts(N);

    double theta = 0;
    while(1) {
        for(int i=0; i<N; i++) {
            double alpha = (double(i)/N-0.5) * 10;
            pts[i] = sin(alpha*8.0 + theta) * exp(-alpha*alpha/2.0);
        }
        gp << "plot '-' with lines notitle \n";
        gp.send1d(pts);

        theta += 0.2;
    }
}