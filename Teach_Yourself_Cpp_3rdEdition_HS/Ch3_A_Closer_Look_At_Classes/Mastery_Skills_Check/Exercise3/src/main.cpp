
/*
	Exercise 3.: Given this class (below),

	class planet{
		int moons;
		double dist_from_sun; // in miles
		double diameter;
		double mass;
	public:
		// ...
		double get_miles(){ return dist_from_sun; }
	};

	create a function called 'light()' that takes as an argument an object of type 'planet'
	and returns the number of seconds that it takes light from the sun to reach the planet.
	(Assume that light ravels at 186,000 miles per second and that 'dist_from_sun' is specified
	in miles.)

*/

int light(planet p){
	return (int) (p.get_miles() / 186000); 
}
