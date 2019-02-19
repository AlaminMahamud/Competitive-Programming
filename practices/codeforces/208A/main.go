package main

import (
	"bufio"
	"fmt"
	"os"
	"regexp"
	"strings"
)

var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

func printf(f string, a ...interface{}) { fmt.Fprintf(writer, f, a...) }
func scanf(f string, a ...interface{})  { fmt.Fscanf(reader, f, a...) }

func main() {
	// STDOUT MUST BE FLUSHED MANUALLY!!!
	defer writer.Flush()

	var s string
	scanf("%s\n", s)
	s = regexp.MustCompile("(WUB)+").ReplaceAllLiteralString(s, " ")
	s = strings.Trim(s, " ")
	printf("%s\n", s)
}
