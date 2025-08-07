#include <iostream>
#include <set>
#include <cmath>
#include <tuple>
#include <vector>
using namespace std;

struct Point {
    long long x, y;

    bool operator<(const Point& p) const {
        return tie(x, y) < tie(p.x, p.y);
    }
};

// To represent a line uniquely as (a, b, c) in ax + by = c
struct Line {
    long long a, b, c;

    Line(Point p1, Point p2) {
        a = p2.y - p1.y;
        b = p1.x - p2.x;
        c = a * p1.x + b * p1.y;

        // Normalize for uniqueness
        long long g = gcd(gcd(abs(a), abs(b)), abs(c));
        if (g != 0) { a /= g; b /= g; c /= g; }

        // Standardize sign
        if (a < 0 || (a == 0 && b < 0)) {
            a = -a; b = -b; c = -c;
        }
    }

    bool operator<(const Line& other) const {
        return tie(a, b, c) < tie(other.a, other.b, other.c);
    }

    static long long gcd(long long a, long long b) {
        return b == 0 ? a : gcd(b, a % b);
    }
};

// Get intersection of two lines
Point intersection(Line l1, Line l2) {
    long long det = l1.a * l2.b - l2.a * l1.b;
    if (det == 0) return { LLONG_MAX, LLONG_MAX }; // Parallel lines

    long long x = (l2.b * l1.c - l1.b * l2.c);
    long long y = (l1.a * l2.c - l2.a * l1.c);

    // Keep as rational number if needed
    return { x, y };
}

int g(int n) {
    set<Point> blue_points = { {0, 100}, {100, 100} };
    set<Point> red_points = { {0, 0}, {100, 0}, {50, 100} };
    set<Point> all_blue = blue_points;

    for (int day = 1; day <= n; ++day) {
        set<Line> lines;
        for (const auto& r : red_points) {
            for (const auto& b : blue_points) {
                lines.insert(Line(r, b));
            }
        }

        set<Point> new_blues;
        vector<Line> line_vec(lines.begin(), lines.end());
        for (size_t i = 0; i < line_vec.size(); ++i) {
            for (size_t j = i + 1; j < line_vec.size(); ++j) {
                Point p = intersection(line_vec[i], line_vec[j]);
                if (p.x == LLONG_MAX) continue; // parallel

                // Turn into blue if not already
                if (all_blue.count(p) == 0) {
                    new_blues.insert(p);
                }
            }
        }

        for (auto& p : new_blues)
            all_blue.insert(p);
        blue_points = all_blue;
    }

    return all_blue.size();
}

int main() {
    cout << "g(16) = " << g(16) << endl;
    return 0;
}
