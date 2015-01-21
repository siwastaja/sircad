typedef distance_t double;

#define X 0
#define Y 1

typedef union
{
	struct
	{
		distance_t x;
		distance_t y;
	};
	distance_t xy[2];
} coord_t;

