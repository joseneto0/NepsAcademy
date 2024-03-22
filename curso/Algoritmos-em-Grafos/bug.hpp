
    #define bugL() { cout << "*** ----------\n"; }

	#define bug(_x) { cout << "*** " << #_x << " " << _x << '\n' << flush; }

	#define bug2(_x,_y) { \
        cout << "*** " << #_x << " " << _x << " " \
                       << #_y << " " << _y << '\n' << flush; \
    }

	#define bug3(_x,_y, _z) { \
        cout << "*** " << #_x << " " << _x << " " \
                       << #_y << " " << _y << " " \
                       << #_z << " " << _z << '\n' << flush; \
    }

	#define bugV(_V) { \
        cout << "*** " << #_V << ": "; for( auto _v:_V) \
        cout << _v << " "; cout << '\n' << flush; \
    }

	#define bugP(_V) { \
        cout << "*** " << #_V << ": | "; \
        for( auto [_i,_j]:_V) \
            cout << _i << " " << _j << " | "; \
        cout << '\n' << flush; \
    }
	