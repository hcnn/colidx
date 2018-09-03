# colidx
Convert matrix indicies i and j to an array's column-major index (fortran).

Warning: 
`colidx` is only included for demonstration purposes. 
There is no advantage of using `hcnn/rowidx` and `hcnn/colidx` at the same time.
It would just cause confusion.

### Installation
```
clib install hcnn/colidx
```

Or add to your `package.json` and run `clib install`

```
{ ...
    "dependencies": {
        "hcnn/colidx": "0.1.0"
        ...
```

### Test and Demo
Download, compile, and run [test.c](https://github.com/hcnn/colidx/blob/master/test.c) and [demo.c](https://github.com/hcnn/colidx/blob/master/demo.c)

```
git clone git@github.com:hcnn/colidx.git
cd colidx
make validate
make showcase
```

### Explanations
Further explanations in [README.ipynb](README.ipynb)
