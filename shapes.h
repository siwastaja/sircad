// Do we need a pointer to parent group (in which the shape belongs to)? Probably not.

typedef enum
{
	SHAPE_LINE = 0,
	SHAPE_ARC,
	SHAPE_PAD,
	SHAPE_FILLEDSOLID
} shape_type_t;

typedef struct
{
	int layer;
	coord_t start;
	coord_t end;
	net* net;
} line_t;

typedef struct
{
	int layer;
	coord_t middle;
	distance_t radius;
	angle_t start;
	angle_t end;
	net* net;
} arc_t;

typedef enum
{
	PAD_TH_OVAL = 0,
	PAD_TH_RECT,
	PAD_SMD_OVAL,
	PAD_SMD_RECT,
	PAD_UNPLATED_HOLE
} pad_type_t;

typedef struct
{
	int upper_layer;
	int lower_layer;
	pad_type_t type;
	coord_t middle;
	coord_t size;
	distance_t hole;
	char* name;
	char* descr;
	net* net;
} pad_t;

typedef struct
{
	shape_type_t type;
	void* segment;
} fs_segment_t;

typedef struct
{
	int layer;
	int num_segments;
	fs_segment_t* segments;
} filledsolid_t;
