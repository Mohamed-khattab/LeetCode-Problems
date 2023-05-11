function compose(functions) {
  if (functions.length === 0) {
    return x => x;
  } else if (functions.length === 1) {
    return functions[0];
  } else {
    return functions.reduceRight((prevFunc, nextFunc) => {
      return x => nextFunc(prevFunc(x));
    });
  }
}
