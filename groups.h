typedef struct
{
	shape_type_t shape_type;
	void* shape;
} group_member_t;

typedef struct
{
	int num_shapes;
	group_member_t* shapes;
} group_t;

typedef struct
{
	group_t group;
	char* designator; // U1, R2, etc.
	char* value;      // NE555, 1k5, etc.
	char* descr;      // Extra description
} component_t;
