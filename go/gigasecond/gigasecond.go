// Package gigasecond will add 1 Billion secs to the time
package gigasecond

// import path for the time package from the standard library
import "time"

// AddGigasecond add 1 Billion secs to the time
func AddGigasecond(t time.Time) time.Time {
	return t.Add(time.Duration(1000000000 * time.Second))
}
