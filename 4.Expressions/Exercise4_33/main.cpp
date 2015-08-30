// Exercise 4.33
// Using Table 4.12 (p.166) explain what the following expression does



someValue ? ++x, ++y : --x, --y;

// someValue is evaluated as a bool expression, if it is zero (i.e. false)

// then x and y is decremented by one unit each

// if someValue is any value other than zero (i.e. true), then x and y is incremented by one



