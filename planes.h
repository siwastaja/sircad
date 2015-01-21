typedef enum
{
	COPPERPOUR_CONTOURFILL = 0,
	COPPERPOUR_ANTISHAPES
} copperpour_mode_t;

typedef struct
{
	copperpour_mode_t mode;
	filledsolid_t base;
	int num_polygons;
	filledsolid_t* polygons;
} copperpour_t;
