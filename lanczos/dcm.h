// Rishav (2022/05/16)

#ifndef _LANCZOS_DCM_H_
#define _LANCZOS_DCM_H_

#include "matrix.h"
#include "quaternion.h"

namespace lnz
{
    class DCM : public Matrix<3, 3>
    {
    public:
        DCM(const float (&array)[3][3]);
        DCM(const DCM &m);
        DCM(const Matrix &m);
        DCM();
        ~DCM() {}

        void operator=(const float (&array)[3][3]);
        void operator=(const Matrix &m);

        Vector<3> get_euler();
        Quaternion get_quaternion();
    };

    DCM::DCM(const float (&array)[3][3])
    {
        for (uint8_t r = 0; r < 3; r++)
        {
            for (uint8_t c = 0; c < 3; c++)
            {
                M[r][c] = array[r][c];
            }
        }
    }

    DCM::DCM(const DCM &m)
    {
        for (uint8_t r = 0; r < 3; r++)
        {
            for (uint8_t c = 0; c < 3; c++)
            {
                M[r][c] = m.M[r][c];
            }
        }
    }

    DCM::DCM(const Matrix<3, 3> &m)
    {
        for (uint8_t r = 0; r < 3; r++)
        {
            for (uint8_t c = 0; c < 3; c++)
            {
                M[r][c] = m.M[r][c];
            }
        }
    }

    DCM::DCM()
    {
        for (uint8_t r = 0; r < 3; r++)
        {
            for (uint8_t c = 0; c < 3; c++)
            {
                M[r][c] = 0.0;
            }
        }
    }

    void DCM::operator=(const float (&array)[3][3])
    {
        for (uint8_t r = 0; r < 3; r++)
        {
            for (uint8_t c = 0; c < 3; c++)
            {
                M[r][c] = array[r][c];
            }
        }
    }

    void DCM::operator=(const Matrix &m)
    {
        for (uint8_t r = 0; r < 3; r++)
        {
            for (uint8_t c = 0; c < 3; c++)
            {
                M[r][c] = m.M[r][c];
            }
        }
    }

    Vector<3> DCM::get_euler()
    {
        float yaw = atan2(M[0][1], M[0][0]);
        float pitch = asin(-M[0][2]);
        float roll = atan2(M[1][2], M[2][2]);

        Vector<3> euler_321({yaw, pitch, roll});
        return euler_321;
    }
}

#endif // dcm.h
