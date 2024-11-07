class BicycleFrontLight : CarLightBase
{
    void BicycleFrontLIght()
    {
        m_SegregatedBrightness = 5;
        m_SegregatedRadius = 100;
        m_SegregatedAngle = 90;
        m_SegregatedColorRGB = Vector(1.0, 0.9, 0.9);

        FadeIn(0.2);
        SetFadeOutTime(0.2);

        SegregateLight();
    }
};