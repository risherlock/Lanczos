# Lanczos
Math library for embedded systems intended for robotics, VR systems, flight software etc.

<br/>
<p align="center">
  <img src="https://github.com/risherlock/Lanczos/blob/main/docs/lanczos.png" width="300">
  <br/><br>
  <em>
    "[There are] addicts of mathematics,
    for whom the science of mathematics is not a logical game, <br/>
    but the language in which the physical universe speaks to us, <br/>
    and whose mastery is inevitable for the comprehension of natural phenomena."<br/>
    <strong> Cornelius Lanczos (1893-1974) </strong>
  </em>
</p>

## TODO

1. How did **inline** solve the problem with the multiple definition of specialized member functions ( ``compute_det()``) and functions of derived classes (``Quaternion::Quaternion(const float (&array)[4])``)? Is it good solution?
2. Use **const** to the functions where you don't want the member variables to be changed inside.
3. Base class should have virtual destructor. Otherwise the child objects will not be destructed.
4. **inline** accessors
5. Initializer list for data members that are objects.
6. 
